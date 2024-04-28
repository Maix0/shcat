/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1971.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9855(t_small_parse_table_array *v)
{
	v->a[197100] = actions(8872);
	v->a[197101] = 1;
	v->a[197102] = sym_variable_name;
	v->a[197103] = state(5409);
	v->a[197104] = 1;
	v->a[197105] = sym_string;
	v->a[197106] = actions(8870);
	v->a[197107] = 2;
	v->a[197108] = aux_sym__simple_variable_name_token1;
	v->a[197109] = aux_sym__multiline_variable_name_token1;
	v->a[197110] = actions(8866);
	v->a[197111] = 9;
	v->a[197112] = anon_sym_DASH;
	v->a[197113] = anon_sym_STAR;
	v->a[197114] = anon_sym_BANG;
	v->a[197115] = anon_sym_QMARK;
	v->a[197116] = anon_sym_DOLLAR;
	v->a[197117] = anon_sym_POUND;
	v->a[197118] = anon_sym_AT2;
	v->a[197119] = anon_sym_0;
	small_parse_table_9856(v);
}

void	small_parse_table_9856(t_small_parse_table_array *v)
{
	v->a[197120] = anon_sym__;
	v->a[197121] = actions(1239);
	v->a[197122] = 16;
	v->a[197123] = anon_sym_PIPE_PIPE;
	v->a[197124] = anon_sym_AMP_AMP;
	v->a[197125] = anon_sym_PIPE;
	v->a[197126] = anon_sym_LT;
	v->a[197127] = anon_sym_GT;
	v->a[197128] = anon_sym_LT_LT;
	v->a[197129] = anon_sym_GT_GT;
	v->a[197130] = anon_sym_PIPE_AMP;
	v->a[197131] = anon_sym_AMP_GT;
	v->a[197132] = anon_sym_AMP_GT_GT;
	v->a[197133] = anon_sym_LT_AMP;
	v->a[197134] = anon_sym_GT_AMP;
	v->a[197135] = anon_sym_GT_PIPE;
	v->a[197136] = anon_sym_LT_AMP_DASH;
	v->a[197137] = anon_sym_GT_AMP_DASH;
	v->a[197138] = anon_sym_LT_LT_DASH;
	v->a[197139] = 21;
	small_parse_table_9857(v);
}

void	small_parse_table_9857(t_small_parse_table_array *v)
{
	v->a[197140] = actions(71);
	v->a[197141] = 1;
	v->a[197142] = sym_comment;
	v->a[197143] = actions(1454);
	v->a[197144] = 1;
	v->a[197145] = anon_sym_DOLLAR;
	v->a[197146] = actions(1460);
	v->a[197147] = 1;
	v->a[197148] = aux_sym_number_token1;
	v->a[197149] = actions(1462);
	v->a[197150] = 1;
	v->a[197151] = aux_sym_number_token2;
	v->a[197152] = actions(1466);
	v->a[197153] = 1;
	v->a[197154] = anon_sym_DOLLAR_LPAREN;
	v->a[197155] = actions(1478);
	v->a[197156] = 1;
	v->a[197157] = sym__brace_start;
	v->a[197158] = actions(8874);
	v->a[197159] = 1;
	small_parse_table_9858(v);
}

void	small_parse_table_9858(t_small_parse_table_array *v)
{
	v->a[197160] = sym_word;
	v->a[197161] = actions(8878);
	v->a[197162] = 1;
	v->a[197163] = anon_sym_DOLLAR_LBRACK;
	v->a[197164] = actions(8880);
	v->a[197165] = 1;
	v->a[197166] = sym__special_character;
	v->a[197167] = actions(8882);
	v->a[197168] = 1;
	v->a[197169] = anon_sym_DQUOTE;
	v->a[197170] = actions(8886);
	v->a[197171] = 1;
	v->a[197172] = anon_sym_DOLLAR_LBRACE;
	v->a[197173] = actions(8888);
	v->a[197174] = 1;
	v->a[197175] = anon_sym_BQUOTE;
	v->a[197176] = actions(8890);
	v->a[197177] = 1;
	v->a[197178] = anon_sym_DOLLAR_BQUOTE;
	v->a[197179] = actions(8894);
	small_parse_table_9859(v);
}

void	small_parse_table_9859(t_small_parse_table_array *v)
{
	v->a[197180] = 1;
	v->a[197181] = sym_test_operator;
	v->a[197182] = actions(8896);
	v->a[197183] = 1;
	v->a[197184] = sym_regex;
	v->a[197185] = state(1180);
	v->a[197186] = 1;
	v->a[197187] = aux_sym__literal_repeat1;
	v->a[197188] = state(1346);
	v->a[197189] = 1;
	v->a[197190] = sym_concatenation;
	v->a[197191] = actions(8876);
	v->a[197192] = 2;
	v->a[197193] = anon_sym_LPAREN_LPAREN;
	v->a[197194] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[197195] = actions(8884);
	v->a[197196] = 2;
	v->a[197197] = sym_raw_string;
	v->a[197198] = sym_ansi_c_string;
	v->a[197199] = actions(8892);
	small_parse_table_9860(v);
}

/* EOF small_parse_table_1971.c */
