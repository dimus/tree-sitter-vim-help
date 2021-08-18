const
  newline = '\n'
  char = /[^*\|]/
  chars = repeat(char)
  text = seq(/[A-Za-z]/, repeat(char)),


module.exports = grammar({
  name: 'VimHelp',


  rules: {
    source_file: $ => seq($.header),
    header: $ => seq($.file_name, $.vim_name, newline, $.manual_title, optional(repeat($.summary)), $.header_separator),
    header_separator: $ => /==[=]+/,
    target: $ => /\*[^*]+\*/,
    link: $ => /\|[^\|]+\|/,
    file_name: $ => $.target,
    vim_name: $ => /[FVN].*/,
    manual_title: $ => /VIM .*/,
    summary: $ => prec.left(repeat1(choice(/[\.A-Za-z][^\|]+/, $.link)))
  }
});
