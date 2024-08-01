/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_391.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1955(t_small_parse_table_array *v)
{
	v->a[39100] = 1;
	v->a[39101] = anon_sym_DQUOTE;
	v->a[39102] = actions(633);
	v->a[39103] = 1;
	v->a[39104] = anon_sym_DOLLAR_LBRACE;
	v->a[39105] = actions(635);
	v->a[39106] = 1;
	v->a[39107] = anon_sym_DOLLAR_LPAREN;
	v->a[39108] = actions(637);
	v->a[39109] = 1;
	v->a[39110] = anon_sym_BQUOTE;
	v->a[39111] = actions(1727);
	v->a[39112] = 1;
	v->a[39113] = sym__bare_dollar;
	v->a[39114] = actions(1800);
	v->a[39115] = 1;
	v->a[39116] = anon_sym_DOLLAR;
	v->a[39117] = actions(1725);
	v->a[39118] = 5;
	v->a[39119] = aux_sym_concatenation_token1;
	small_parse_table_1956(v);
}

void	small_parse_table_1956(t_small_parse_table_array *v)
{
	v->a[39120] = sym_raw_string;
	v->a[39121] = sym_number;
	v->a[39122] = sym__comment_word;
	v->a[39123] = sym_word;
	v->a[39124] = state(475);
	v->a[39125] = 5;
	v->a[39126] = sym_arithmetic_expansion;
	v->a[39127] = sym_string;
	v->a[39128] = sym_simple_expansion;
	v->a[39129] = sym_expansion;
	v->a[39130] = sym_command_substitution;
	v->a[39131] = 10;
	v->a[39132] = actions(3);
	v->a[39133] = 1;
	v->a[39134] = sym_comment;
	v->a[39135] = actions(704);
	v->a[39136] = 1;
	v->a[39137] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39138] = actions(708);
	v->a[39139] = 1;
	small_parse_table_1957(v);
}

void	small_parse_table_1957(t_small_parse_table_array *v)
{
	v->a[39140] = anon_sym_DQUOTE;
	v->a[39141] = actions(710);
	v->a[39142] = 1;
	v->a[39143] = anon_sym_DOLLAR_LBRACE;
	v->a[39144] = actions(712);
	v->a[39145] = 1;
	v->a[39146] = anon_sym_DOLLAR_LPAREN;
	v->a[39147] = actions(714);
	v->a[39148] = 1;
	v->a[39149] = anon_sym_BQUOTE;
	v->a[39150] = actions(1525);
	v->a[39151] = 1;
	v->a[39152] = sym__bare_dollar;
	v->a[39153] = actions(1802);
	v->a[39154] = 1;
	v->a[39155] = anon_sym_DOLLAR;
	v->a[39156] = actions(1521);
	v->a[39157] = 5;
	v->a[39158] = aux_sym_concatenation_token1;
	v->a[39159] = sym_raw_string;
	small_parse_table_1958(v);
}

void	small_parse_table_1958(t_small_parse_table_array *v)
{
	v->a[39160] = sym_number;
	v->a[39161] = sym__comment_word;
	v->a[39162] = sym_word;
	v->a[39163] = state(474);
	v->a[39164] = 5;
	v->a[39165] = sym_arithmetic_expansion;
	v->a[39166] = sym_string;
	v->a[39167] = sym_simple_expansion;
	v->a[39168] = sym_expansion;
	v->a[39169] = sym_command_substitution;
	v->a[39170] = 6;
	v->a[39171] = actions(3);
	v->a[39172] = 1;
	v->a[39173] = sym_comment;
	v->a[39174] = actions(1804);
	v->a[39175] = 1;
	v->a[39176] = aux_sym_concatenation_token1;
	v->a[39177] = actions(1807);
	v->a[39178] = 1;
	v->a[39179] = sym__concat;
	small_parse_table_1959(v);
}

void	small_parse_table_1959(t_small_parse_table_array *v)
{
	v->a[39180] = state(766);
	v->a[39181] = 1;
	v->a[39182] = aux_sym_concatenation_repeat1;
	v->a[39183] = actions(981);
	v->a[39184] = 3;
	v->a[39185] = sym_variable_name;
	v->a[39186] = ts_builtin_sym_end;
	v->a[39187] = aux_sym_heredoc_redirect_token1;
	v->a[39188] = actions(973);
	v->a[39189] = 11;
	v->a[39190] = anon_sym_PIPE;
	v->a[39191] = anon_sym_RPAREN;
	v->a[39192] = anon_sym_SEMI_SEMI;
	v->a[39193] = anon_sym_AMP_AMP;
	v->a[39194] = anon_sym_PIPE_PIPE;
	v->a[39195] = anon_sym_LT;
	v->a[39196] = anon_sym_GT;
	v->a[39197] = anon_sym_GT_GT;
	v->a[39198] = anon_sym_LT_LT;
	v->a[39199] = anon_sym_BQUOTE;
	small_parse_table_1960(v);
}

/* EOF small_parse_table_391.c */
