const
  newline = '\n'
  char = /[^*\|]/
  chars = repeat(char)
  text = seq(/[A-Za-z]/, repeat(char)),


module.exports = grammar({
  name: 'VimHelp',


  rules: {
    source_file: $ => seq($.header),

    header: $ => seq(
      alias($.target, $.file_name),
      $.vim_desc,
      $.manual_title,
      repeat($.summary),
      $.header_separator
    ),

    header_separator: $ => /==[=]+/,
    target: $ => /\*[^*]+\*/,
    link: $ => /\|[^\|]+\|/,
    vim_desc: $ => seq(choice('Vim','Nvim', For Vim'), /.*/)),
    manual_title: $ => /VIM .*/,
    summary: $ => prec.left(repeat1(choice(/[\.A-Za-z][^\|]+/, $.link)))
  }
});
