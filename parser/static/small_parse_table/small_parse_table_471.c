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
	v->a[47100] = 1;
	v->a[47101] = sym_command_name;
	v->a[47102] = state(665);
	v->a[47103] = 1;
	v->a[47104] = sym_concatenation;
	v->a[47105] = state(1237);
	v->a[47106] = 1;
	v->a[47107] = sym_file_redirect;
	v->a[47108] = actions(123);
	v->a[47109] = 2;
	v->a[47110] = sym_raw_string;
	v->a[47111] = sym_word;
	v->a[47112] = actions(1100);
	v->a[47113] = 2;
	v->a[47114] = anon_sym_LT_AMP_DASH;
	v->a[47115] = anon_sym_GT_AMP_DASH;
	v->a[47116] = state(996);
	v->a[47117] = 2;
	v->a[47118] = sym_variable_assignment;
	v->a[47119] = aux_sym_command_repeat1;
	small_parse_table_2356(v);
}

void	small_parse_table_2356(t_small_parse_table_array *v)
{
	v->a[47120] = state(282);
	v->a[47121] = 6;
	v->a[47122] = sym_arithmetic_expansion;
	v->a[47123] = sym_string;
	v->a[47124] = sym_number;
	v->a[47125] = sym_simple_expansion;
	v->a[47126] = sym_expansion;
	v->a[47127] = sym_command_substitution;
	v->a[47128] = actions(1098);
	v->a[47129] = 8;
	v->a[47130] = anon_sym_LT;
	v->a[47131] = anon_sym_GT;
	v->a[47132] = anon_sym_GT_GT;
	v->a[47133] = anon_sym_AMP_GT;
	v->a[47134] = anon_sym_AMP_GT_GT;
	v->a[47135] = anon_sym_LT_AMP;
	v->a[47136] = anon_sym_GT_AMP;
	v->a[47137] = anon_sym_GT_PIPE;
	v->a[47138] = 17;
	v->a[47139] = actions(1404);
	small_parse_table_2357(v);
}

void	small_parse_table_2357(t_small_parse_table_array *v)
{
	v->a[47140] = 1;
	v->a[47141] = sym_comment;
	v->a[47142] = actions(1418);
	v->a[47143] = 1;
	v->a[47144] = anon_sym_AMP;
	v->a[47145] = actions(1420);
	v->a[47146] = 1;
	v->a[47147] = anon_sym_PIPE;
	v->a[47148] = actions(1422);
	v->a[47149] = 1;
	v->a[47150] = anon_sym_AMP_AMP;
	v->a[47151] = actions(1424);
	v->a[47152] = 1;
	v->a[47153] = anon_sym_PIPE_PIPE;
	v->a[47154] = actions(1426);
	v->a[47155] = 1;
	v->a[47156] = anon_sym_EQ;
	v->a[47157] = actions(1428);
	v->a[47158] = 1;
	v->a[47159] = anon_sym_CARET;
	small_parse_table_2358(v);
}

void	small_parse_table_2358(t_small_parse_table_array *v)
{
	v->a[47160] = actions(1430);
	v->a[47161] = 1;
	v->a[47162] = anon_sym_QMARK;
	v->a[47163] = actions(1684);
	v->a[47164] = 1;
	v->a[47165] = anon_sym_RPAREN_RPAREN;
	v->a[47166] = actions(1402);
	v->a[47167] = 2;
	v->a[47168] = anon_sym_PLUS_PLUS2;
	v->a[47169] = anon_sym_DASH_DASH2;
	v->a[47170] = actions(1408);
	v->a[47171] = 2;
	v->a[47172] = anon_sym_LT;
	v->a[47173] = anon_sym_GT;
	v->a[47174] = actions(1410);
	v->a[47175] = 2;
	v->a[47176] = anon_sym_GT_GT;
	v->a[47177] = anon_sym_LT_LT;
	v->a[47178] = actions(1412);
	v->a[47179] = 2;
	small_parse_table_2359(v);
}

void	small_parse_table_2359(t_small_parse_table_array *v)
{
	v->a[47180] = anon_sym_LT_EQ;
	v->a[47181] = anon_sym_GT_EQ;
	v->a[47182] = actions(1414);
	v->a[47183] = 2;
	v->a[47184] = anon_sym_PLUS;
	v->a[47185] = anon_sym_DASH;
	v->a[47186] = actions(1416);
	v->a[47187] = 2;
	v->a[47188] = anon_sym_EQ_EQ;
	v->a[47189] = anon_sym_BANG_EQ;
	v->a[47190] = actions(1406);
	v->a[47191] = 3;
	v->a[47192] = anon_sym_STAR;
	v->a[47193] = anon_sym_SLASH;
	v->a[47194] = anon_sym_PERCENT;
	v->a[47195] = actions(1543);
	v->a[47196] = 10;
	v->a[47197] = anon_sym_PLUS_EQ;
	v->a[47198] = anon_sym_DASH_EQ;
	v->a[47199] = anon_sym_STAR_EQ;
	small_parse_table_2360(v);
}

/* EOF small_parse_table_471.c */
