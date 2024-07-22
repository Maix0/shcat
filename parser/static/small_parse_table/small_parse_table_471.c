/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_471.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2355(t_small_parse_table_array *v)
{
	v->a[47100] = sym_terminator;
	v->a[47101] = state(990);
	v->a[47102] = 1;
	v->a[47103] = aux_sym_case_statement_repeat1;
	v->a[47104] = state(1682);
	v->a[47105] = 1;
	v->a[47106] = sym_case_item;
	v->a[47107] = state(1988);
	v->a[47108] = 1;
	v->a[47109] = sym__case_item_last;
	v->a[47110] = state(1877);
	v->a[47111] = 2;
	v->a[47112] = sym_concatenation;
	v->a[47113] = sym__extglob_blob;
	v->a[47114] = actions(1716);
	v->a[47115] = 3;
	v->a[47116] = sym_raw_string;
	v->a[47117] = sym_number;
	v->a[47118] = sym_word;
	v->a[47119] = actions(1722);
	small_parse_table_2356(v);
}

void	small_parse_table_2356(t_small_parse_table_array *v)
{
	v->a[47120] = 3;
	v->a[47121] = anon_sym_SEMI_SEMI;
	v->a[47122] = aux_sym_heredoc_redirect_token1;
	v->a[47123] = anon_sym_SEMI;
	v->a[47124] = state(1772);
	v->a[47125] = 5;
	v->a[47126] = sym_arithmetic_expansion;
	v->a[47127] = sym_string;
	v->a[47128] = sym_simple_expansion;
	v->a[47129] = sym_expansion;
	v->a[47130] = sym_command_substitution;
	v->a[47131] = 6;
	v->a[47132] = actions(3);
	v->a[47133] = 1;
	v->a[47134] = sym_comment;
	v->a[47135] = actions(1738);
	v->a[47136] = 1;
	v->a[47137] = aux_sym_concatenation_token1;
	v->a[47138] = actions(1740);
	v->a[47139] = 1;
	small_parse_table_2357(v);
}

void	small_parse_table_2357(t_small_parse_table_array *v)
{
	v->a[47140] = sym__concat;
	v->a[47141] = state(786);
	v->a[47142] = 1;
	v->a[47143] = aux_sym_concatenation_repeat1;
	v->a[47144] = actions(1097);
	v->a[47145] = 2;
	v->a[47146] = sym_file_descriptor;
	v->a[47147] = sym_variable_name;
	v->a[47148] = actions(1099);
	v->a[47149] = 21;
	v->a[47150] = anon_sym_PIPE;
	v->a[47151] = anon_sym_AMP_AMP;
	v->a[47152] = anon_sym_PIPE_PIPE;
	v->a[47153] = anon_sym_LT;
	v->a[47154] = anon_sym_GT;
	v->a[47155] = anon_sym_GT_GT;
	v->a[47156] = anon_sym_LT_AMP;
	v->a[47157] = anon_sym_GT_AMP;
	v->a[47158] = anon_sym_GT_PIPE;
	v->a[47159] = anon_sym_LT_GT;
	small_parse_table_2358(v);
}

void	small_parse_table_2358(t_small_parse_table_array *v)
{
	v->a[47160] = anon_sym_LT_LT;
	v->a[47161] = anon_sym_LT_LT_DASH;
	v->a[47162] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47163] = anon_sym_DOLLAR;
	v->a[47164] = anon_sym_DQUOTE;
	v->a[47165] = sym_raw_string;
	v->a[47166] = sym_number;
	v->a[47167] = anon_sym_DOLLAR_LBRACE;
	v->a[47168] = anon_sym_DOLLAR_LPAREN;
	v->a[47169] = anon_sym_BQUOTE;
	v->a[47170] = sym_word;
	v->a[47171] = 15;
	v->a[47172] = actions(501);
	v->a[47173] = 1;
	v->a[47174] = sym_comment;
	v->a[47175] = actions(1692);
	v->a[47176] = 1;
	v->a[47177] = anon_sym_LPAREN;
	v->a[47178] = actions(1694);
	v->a[47179] = 1;
	small_parse_table_2359(v);
}

void	small_parse_table_2359(t_small_parse_table_array *v)
{
	v->a[47180] = anon_sym_BANG;
	v->a[47181] = actions(1700);
	v->a[47182] = 1;
	v->a[47183] = anon_sym_TILDE;
	v->a[47184] = actions(1702);
	v->a[47185] = 1;
	v->a[47186] = anon_sym_DOLLAR;
	v->a[47187] = actions(1704);
	v->a[47188] = 1;
	v->a[47189] = anon_sym_DQUOTE;
	v->a[47190] = actions(1708);
	v->a[47191] = 1;
	v->a[47192] = anon_sym_DOLLAR_LBRACE;
	v->a[47193] = actions(1710);
	v->a[47194] = 1;
	v->a[47195] = anon_sym_DOLLAR_LPAREN;
	v->a[47196] = actions(1712);
	v->a[47197] = 1;
	v->a[47198] = anon_sym_BQUOTE;
	v->a[47199] = actions(1714);
	small_parse_table_2360(v);
}

/* EOF small_parse_table_471.c */
