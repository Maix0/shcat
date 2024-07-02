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
	v->a[47100] = anon_sym_DQUOTE;
	v->a[47101] = actions(1647);
	v->a[47102] = 1;
	v->a[47103] = anon_sym_DOLLAR_LBRACE;
	v->a[47104] = actions(1649);
	v->a[47105] = 1;
	v->a[47106] = anon_sym_DOLLAR_LPAREN;
	v->a[47107] = actions(1651);
	v->a[47108] = 1;
	v->a[47109] = anon_sym_BQUOTE;
	v->a[47110] = actions(1653);
	v->a[47111] = 1;
	v->a[47112] = sym_extglob_pattern;
	v->a[47113] = actions(1697);
	v->a[47114] = 1;
	v->a[47115] = anon_sym_esac;
	v->a[47116] = state(955);
	v->a[47117] = 1;
	v->a[47118] = sym_terminator;
	v->a[47119] = state(1044);
	small_parse_table_2356(v);
}

void	small_parse_table_2356(t_small_parse_table_array *v)
{
	v->a[47120] = 1;
	v->a[47121] = aux_sym_case_statement_repeat1;
	v->a[47122] = state(1713);
	v->a[47123] = 1;
	v->a[47124] = sym_case_item;
	v->a[47125] = state(1990);
	v->a[47126] = 1;
	v->a[47127] = sym__case_item_last;
	v->a[47128] = state(1873);
	v->a[47129] = 2;
	v->a[47130] = sym_concatenation;
	v->a[47131] = sym__extglob_blob;
	v->a[47132] = actions(1633);
	v->a[47133] = 3;
	v->a[47134] = sym_raw_string;
	v->a[47135] = sym_number;
	v->a[47136] = sym_word;
	v->a[47137] = actions(1639);
	v->a[47138] = 4;
	v->a[47139] = anon_sym_SEMI_SEMI;
	small_parse_table_2357(v);
}

void	small_parse_table_2357(t_small_parse_table_array *v)
{
	v->a[47140] = aux_sym_heredoc_redirect_token1;
	v->a[47141] = anon_sym_AMP;
	v->a[47142] = anon_sym_SEMI;
	v->a[47143] = state(1806);
	v->a[47144] = 5;
	v->a[47145] = sym_arithmetic_expansion;
	v->a[47146] = sym_string;
	v->a[47147] = sym_simple_expansion;
	v->a[47148] = sym_expansion;
	v->a[47149] = sym_command_substitution;
	v->a[47150] = 4;
	v->a[47151] = actions(3);
	v->a[47152] = 1;
	v->a[47153] = sym_comment;
	v->a[47154] = actions(1661);
	v->a[47155] = 1;
	v->a[47156] = ts_builtin_sym_end;
	v->a[47157] = actions(1426);
	v->a[47158] = 2;
	v->a[47159] = sym_file_descriptor;
	small_parse_table_2358(v);
}

void	small_parse_table_2358(t_small_parse_table_array *v)
{
	v->a[47160] = sym_variable_name;
	v->a[47161] = actions(1422);
	v->a[47162] = 24;
	v->a[47163] = anon_sym_for;
	v->a[47164] = anon_sym_while;
	v->a[47165] = anon_sym_until;
	v->a[47166] = anon_sym_if;
	v->a[47167] = anon_sym_case;
	v->a[47168] = anon_sym_LPAREN;
	v->a[47169] = anon_sym_LBRACE;
	v->a[47170] = anon_sym_BANG;
	v->a[47171] = anon_sym_LT;
	v->a[47172] = anon_sym_GT;
	v->a[47173] = anon_sym_GT_GT;
	v->a[47174] = anon_sym_LT_AMP;
	v->a[47175] = anon_sym_GT_AMP;
	v->a[47176] = anon_sym_GT_PIPE;
	v->a[47177] = anon_sym_LT_GT;
	v->a[47178] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47179] = anon_sym_DOLLAR;
	small_parse_table_2359(v);
}

void	small_parse_table_2359(t_small_parse_table_array *v)
{
	v->a[47180] = anon_sym_DQUOTE;
	v->a[47181] = sym_raw_string;
	v->a[47182] = sym_number;
	v->a[47183] = anon_sym_DOLLAR_LBRACE;
	v->a[47184] = anon_sym_DOLLAR_LPAREN;
	v->a[47185] = anon_sym_BQUOTE;
	v->a[47186] = sym_word;
	v->a[47187] = 16;
	v->a[47188] = actions(680);
	v->a[47189] = 1;
	v->a[47190] = sym_comment;
	v->a[47191] = actions(1574);
	v->a[47192] = 1;
	v->a[47193] = anon_sym_LPAREN;
	v->a[47194] = actions(1576);
	v->a[47195] = 1;
	v->a[47196] = anon_sym_BANG;
	v->a[47197] = actions(1584);
	v->a[47198] = 1;
	v->a[47199] = anon_sym_TILDE;
	small_parse_table_2360(v);
}

/* EOF small_parse_table_471.c */
