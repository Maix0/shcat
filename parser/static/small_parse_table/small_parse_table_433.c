/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_433.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2165(t_small_parse_table_array *v)
{
	v->a[43300] = actions(678);
	v->a[43301] = 17;
	v->a[43302] = anon_sym_LT;
	v->a[43303] = anon_sym_GT;
	v->a[43304] = anon_sym_GT_GT;
	v->a[43305] = anon_sym_LT_AMP;
	v->a[43306] = anon_sym_GT_AMP;
	v->a[43307] = anon_sym_GT_PIPE;
	v->a[43308] = anon_sym_LT_AMP_DASH;
	v->a[43309] = anon_sym_GT_AMP_DASH;
	v->a[43310] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43311] = anon_sym_DOLLAR;
	v->a[43312] = anon_sym_DQUOTE;
	v->a[43313] = sym_raw_string;
	v->a[43314] = sym_number;
	v->a[43315] = anon_sym_DOLLAR_LBRACE;
	v->a[43316] = anon_sym_DOLLAR_LPAREN;
	v->a[43317] = anon_sym_BQUOTE;
	v->a[43318] = sym_word;
	v->a[43319] = 3;
	small_parse_table_2166(v);
}

void	small_parse_table_2166(t_small_parse_table_array *v)
{
	v->a[43320] = actions(3);
	v->a[43321] = 1;
	v->a[43322] = sym_comment;
	v->a[43323] = actions(1401);
	v->a[43324] = 2;
	v->a[43325] = sym_file_descriptor;
	v->a[43326] = sym_variable_name;
	v->a[43327] = actions(1399);
	v->a[43328] = 28;
	v->a[43329] = anon_sym_for;
	v->a[43330] = anon_sym_while;
	v->a[43331] = anon_sym_until;
	v->a[43332] = anon_sym_if;
	v->a[43333] = anon_sym_fi;
	v->a[43334] = anon_sym_elif;
	v->a[43335] = anon_sym_else;
	v->a[43336] = anon_sym_case;
	v->a[43337] = anon_sym_LPAREN;
	v->a[43338] = anon_sym_LBRACE;
	v->a[43339] = anon_sym_BANG;
	small_parse_table_2167(v);
}

void	small_parse_table_2167(t_small_parse_table_array *v)
{
	v->a[43340] = anon_sym_LT;
	v->a[43341] = anon_sym_GT;
	v->a[43342] = anon_sym_GT_GT;
	v->a[43343] = anon_sym_LT_AMP;
	v->a[43344] = anon_sym_GT_AMP;
	v->a[43345] = anon_sym_GT_PIPE;
	v->a[43346] = anon_sym_LT_AMP_DASH;
	v->a[43347] = anon_sym_GT_AMP_DASH;
	v->a[43348] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43349] = anon_sym_DOLLAR;
	v->a[43350] = anon_sym_DQUOTE;
	v->a[43351] = sym_raw_string;
	v->a[43352] = sym_number;
	v->a[43353] = anon_sym_DOLLAR_LBRACE;
	v->a[43354] = anon_sym_DOLLAR_LPAREN;
	v->a[43355] = anon_sym_BQUOTE;
	v->a[43356] = sym_word;
	v->a[43357] = 5;
	v->a[43358] = actions(3);
	v->a[43359] = 1;
	small_parse_table_2168(v);
}

void	small_parse_table_2168(t_small_parse_table_array *v)
{
	v->a[43360] = sym_comment;
	v->a[43361] = state(984);
	v->a[43362] = 1;
	v->a[43363] = sym_concatenation;
	v->a[43364] = actions(790);
	v->a[43365] = 2;
	v->a[43366] = sym_file_descriptor;
	v->a[43367] = sym_variable_name;
	v->a[43368] = state(865);
	v->a[43369] = 5;
	v->a[43370] = sym_arithmetic_expansion;
	v->a[43371] = sym_string;
	v->a[43372] = sym_simple_expansion;
	v->a[43373] = sym_expansion;
	v->a[43374] = sym_command_substitution;
	v->a[43375] = actions(788);
	v->a[43376] = 22;
	v->a[43377] = anon_sym_PIPE;
	v->a[43378] = anon_sym_AMP_AMP;
	v->a[43379] = anon_sym_PIPE_PIPE;
	small_parse_table_2169(v);
}

void	small_parse_table_2169(t_small_parse_table_array *v)
{
	v->a[43380] = anon_sym_LT;
	v->a[43381] = anon_sym_GT;
	v->a[43382] = anon_sym_GT_GT;
	v->a[43383] = anon_sym_LT_AMP;
	v->a[43384] = anon_sym_GT_AMP;
	v->a[43385] = anon_sym_GT_PIPE;
	v->a[43386] = anon_sym_LT_AMP_DASH;
	v->a[43387] = anon_sym_GT_AMP_DASH;
	v->a[43388] = anon_sym_LT_LT;
	v->a[43389] = anon_sym_LT_LT_DASH;
	v->a[43390] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43391] = anon_sym_DOLLAR;
	v->a[43392] = anon_sym_DQUOTE;
	v->a[43393] = sym_raw_string;
	v->a[43394] = sym_number;
	v->a[43395] = anon_sym_DOLLAR_LBRACE;
	v->a[43396] = anon_sym_DOLLAR_LPAREN;
	v->a[43397] = anon_sym_BQUOTE;
	v->a[43398] = sym_word;
	v->a[43399] = 10;
	small_parse_table_2170(v);
}

/* EOF small_parse_table_433.c */
