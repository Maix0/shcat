/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1017.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5085(t_small_parse_table_array *v)
{
	v->a[101700] = anon_sym_PIPE;
	v->a[101701] = anon_sym_SEMI_SEMI;
	v->a[101702] = anon_sym_SEMI_AMP;
	v->a[101703] = anon_sym_SEMI_SEMI_AMP;
	v->a[101704] = anon_sym_PIPE_AMP;
	v->a[101705] = anon_sym_AMP_AMP;
	v->a[101706] = anon_sym_PIPE_PIPE;
	v->a[101707] = anon_sym_LT;
	v->a[101708] = anon_sym_GT;
	v->a[101709] = anon_sym_GT_GT;
	v->a[101710] = anon_sym_AMP_GT;
	v->a[101711] = anon_sym_AMP_GT_GT;
	v->a[101712] = anon_sym_LT_AMP;
	v->a[101713] = anon_sym_GT_AMP;
	v->a[101714] = anon_sym_GT_PIPE;
	v->a[101715] = anon_sym_LT_AMP_DASH;
	v->a[101716] = anon_sym_GT_AMP_DASH;
	v->a[101717] = anon_sym_LT_LT;
	v->a[101718] = anon_sym_LT_LT_DASH;
	v->a[101719] = anon_sym_AMP;
	small_parse_table_5086(v);
}

void	small_parse_table_5086(t_small_parse_table_array *v)
{
	v->a[101720] = anon_sym_SEMI;
	v->a[101721] = 19;
	v->a[101722] = actions(3);
	v->a[101723] = 1;
	v->a[101724] = sym_comment;
	v->a[101725] = actions(5812);
	v->a[101726] = 1;
	v->a[101727] = sym_word;
	v->a[101728] = actions(5814);
	v->a[101729] = 1;
	v->a[101730] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101731] = actions(5816);
	v->a[101732] = 1;
	v->a[101733] = anon_sym_DOLLAR;
	v->a[101734] = actions(5818);
	v->a[101735] = 1;
	v->a[101736] = sym__special_character;
	v->a[101737] = actions(5820);
	v->a[101738] = 1;
	v->a[101739] = anon_sym_DQUOTE;
	small_parse_table_5087(v);
}

void	small_parse_table_5087(t_small_parse_table_array *v)
{
	v->a[101740] = actions(5824);
	v->a[101741] = 1;
	v->a[101742] = aux_sym_number_token1;
	v->a[101743] = actions(5826);
	v->a[101744] = 1;
	v->a[101745] = aux_sym_number_token2;
	v->a[101746] = actions(5828);
	v->a[101747] = 1;
	v->a[101748] = anon_sym_DOLLAR_LBRACE;
	v->a[101749] = actions(5830);
	v->a[101750] = 1;
	v->a[101751] = anon_sym_DOLLAR_LPAREN;
	v->a[101752] = actions(5832);
	v->a[101753] = 1;
	v->a[101754] = anon_sym_BQUOTE;
	v->a[101755] = actions(5834);
	v->a[101756] = 1;
	v->a[101757] = anon_sym_DOLLAR_BQUOTE;
	v->a[101758] = actions(5836);
	v->a[101759] = 1;
	small_parse_table_5088(v);
}

void	small_parse_table_5088(t_small_parse_table_array *v)
{
	v->a[101760] = sym__comment_word;
	v->a[101761] = actions(5838);
	v->a[101762] = 1;
	v->a[101763] = sym__empty_value;
	v->a[101764] = actions(5840);
	v->a[101765] = 1;
	v->a[101766] = sym__brace_start;
	v->a[101767] = state(1666);
	v->a[101768] = 1;
	v->a[101769] = aux_sym__literal_repeat1;
	v->a[101770] = state(1678);
	v->a[101771] = 1;
	v->a[101772] = sym_concatenation;
	v->a[101773] = actions(5822);
	v->a[101774] = 2;
	v->a[101775] = sym_test_operator;
	v->a[101776] = sym_raw_string;
	v->a[101777] = state(1492);
	v->a[101778] = 7;
	v->a[101779] = sym_arithmetic_expansion;
	small_parse_table_5089(v);
}

void	small_parse_table_5089(t_small_parse_table_array *v)
{
	v->a[101780] = sym_brace_expression;
	v->a[101781] = sym_string;
	v->a[101782] = sym_number;
	v->a[101783] = sym_simple_expansion;
	v->a[101784] = sym_expansion;
	v->a[101785] = sym_command_substitution;
	v->a[101786] = 18;
	v->a[101787] = actions(57);
	v->a[101788] = 1;
	v->a[101789] = sym_comment;
	v->a[101790] = actions(4340);
	v->a[101791] = 1;
	v->a[101792] = anon_sym_DOLLAR;
	v->a[101793] = actions(4346);
	v->a[101794] = 1;
	v->a[101795] = aux_sym_number_token1;
	v->a[101796] = actions(4348);
	v->a[101797] = 1;
	v->a[101798] = aux_sym_number_token2;
	v->a[101799] = actions(4352);
	small_parse_table_5090(v);
}

/* EOF small_parse_table_1017.c */
