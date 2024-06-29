/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_601.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3005(t_small_parse_table_array *v)
{
	v->a[60100] = 1;
	v->a[60101] = sym_variable_name;
	v->a[60102] = actions(1837);
	v->a[60103] = 2;
	v->a[60104] = anon_sym_PLUS_PLUS;
	v->a[60105] = anon_sym_DASH_DASH;
	v->a[60106] = actions(1839);
	v->a[60107] = 2;
	v->a[60108] = anon_sym_DASH2;
	v->a[60109] = anon_sym_PLUS2;
	v->a[60110] = actions(1847);
	v->a[60111] = 2;
	v->a[60112] = sym_number;
	v->a[60113] = aux_sym__simple_variable_name_token1;
	v->a[60114] = state(370);
	v->a[60115] = 3;
	v->a[60116] = sym_string;
	v->a[60117] = sym_simple_expansion;
	v->a[60118] = sym_expansion;
	v->a[60119] = state(335);
	small_parse_table_3006(v);
}

void	small_parse_table_3006(t_small_parse_table_array *v)
{
	v->a[60120] = 8;
	v->a[60121] = sym__arithmetic_expression;
	v->a[60122] = sym_arithmetic_literal;
	v->a[60123] = sym_arithmetic_binary_expression;
	v->a[60124] = sym_arithmetic_ternary_expression;
	v->a[60125] = sym_arithmetic_unary_expression;
	v->a[60126] = sym_arithmetic_postfix_expression;
	v->a[60127] = sym_arithmetic_parenthesized_expression;
	v->a[60128] = sym_command_substitution;
	v->a[60129] = 15;
	v->a[60130] = actions(1074);
	v->a[60131] = 1;
	v->a[60132] = sym_comment;
	v->a[60133] = actions(1831);
	v->a[60134] = 1;
	v->a[60135] = anon_sym_LPAREN;
	v->a[60136] = actions(1833);
	v->a[60137] = 1;
	v->a[60138] = anon_sym_BANG;
	v->a[60139] = actions(1841);
	small_parse_table_3007(v);
}

void	small_parse_table_3007(t_small_parse_table_array *v)
{
	v->a[60140] = 1;
	v->a[60141] = anon_sym_TILDE;
	v->a[60142] = actions(1843);
	v->a[60143] = 1;
	v->a[60144] = anon_sym_DOLLAR;
	v->a[60145] = actions(1845);
	v->a[60146] = 1;
	v->a[60147] = anon_sym_DQUOTE;
	v->a[60148] = actions(1849);
	v->a[60149] = 1;
	v->a[60150] = anon_sym_DOLLAR_LBRACE;
	v->a[60151] = actions(1851);
	v->a[60152] = 1;
	v->a[60153] = anon_sym_DOLLAR_LPAREN;
	v->a[60154] = actions(1853);
	v->a[60155] = 1;
	v->a[60156] = anon_sym_BQUOTE;
	v->a[60157] = actions(1855);
	v->a[60158] = 1;
	v->a[60159] = sym_variable_name;
	small_parse_table_3008(v);
}

void	small_parse_table_3008(t_small_parse_table_array *v)
{
	v->a[60160] = actions(1837);
	v->a[60161] = 2;
	v->a[60162] = anon_sym_PLUS_PLUS;
	v->a[60163] = anon_sym_DASH_DASH;
	v->a[60164] = actions(1839);
	v->a[60165] = 2;
	v->a[60166] = anon_sym_DASH2;
	v->a[60167] = anon_sym_PLUS2;
	v->a[60168] = actions(1847);
	v->a[60169] = 2;
	v->a[60170] = sym_number;
	v->a[60171] = aux_sym__simple_variable_name_token1;
	v->a[60172] = state(370);
	v->a[60173] = 3;
	v->a[60174] = sym_string;
	v->a[60175] = sym_simple_expansion;
	v->a[60176] = sym_expansion;
	v->a[60177] = state(508);
	v->a[60178] = 8;
	v->a[60179] = sym__arithmetic_expression;
	small_parse_table_3009(v);
}

void	small_parse_table_3009(t_small_parse_table_array *v)
{
	v->a[60180] = sym_arithmetic_literal;
	v->a[60181] = sym_arithmetic_binary_expression;
	v->a[60182] = sym_arithmetic_ternary_expression;
	v->a[60183] = sym_arithmetic_unary_expression;
	v->a[60184] = sym_arithmetic_postfix_expression;
	v->a[60185] = sym_arithmetic_parenthesized_expression;
	v->a[60186] = sym_command_substitution;
	v->a[60187] = 3;
	v->a[60188] = actions(3);
	v->a[60189] = 1;
	v->a[60190] = sym_comment;
	v->a[60191] = actions(988);
	v->a[60192] = 5;
	v->a[60193] = sym_file_descriptor;
	v->a[60194] = sym__concat;
	v->a[60195] = sym_variable_name;
	v->a[60196] = ts_builtin_sym_end;
	v->a[60197] = aux_sym_heredoc_redirect_token1;
	v->a[60198] = actions(983);
	v->a[60199] = 21;
	small_parse_table_3010(v);
}

/* EOF small_parse_table_601.c */
