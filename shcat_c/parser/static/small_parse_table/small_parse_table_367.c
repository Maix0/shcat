/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_367.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1835(t_small_parse_table_array *v)
{
	v->a[36700] = 1;
	v->a[36701] = aux_sym_number_token2;
	v->a[36702] = actions(328);
	v->a[36703] = 1;
	v->a[36704] = anon_sym_DOLLAR_LBRACE;
	v->a[36705] = actions(330);
	v->a[36706] = 1;
	v->a[36707] = anon_sym_DOLLAR_LPAREN;
	v->a[36708] = actions(332);
	v->a[36709] = 1;
	v->a[36710] = anon_sym_BQUOTE;
	v->a[36711] = actions(334);
	v->a[36712] = 1;
	v->a[36713] = anon_sym_DOLLAR_BQUOTE;
	v->a[36714] = actions(342);
	v->a[36715] = 1;
	v->a[36716] = sym_test_operator;
	v->a[36717] = actions(344);
	v->a[36718] = 1;
	v->a[36719] = sym__brace_start;
	small_parse_table_1836(v);
}

void	small_parse_table_1836(t_small_parse_table_array *v)
{
	v->a[36720] = actions(1394);
	v->a[36721] = 1;
	v->a[36722] = anon_sym_LT_LT_LT;
	v->a[36723] = actions(1396);
	v->a[36724] = 1;
	v->a[36725] = sym_file_descriptor;
	v->a[36726] = actions(2723);
	v->a[36727] = 1;
	v->a[36728] = sym_word;
	v->a[36729] = actions(4705);
	v->a[36730] = 1;
	v->a[36731] = sym_variable_name;
	v->a[36732] = actions(4873);
	v->a[36733] = 1;
	v->a[36734] = sym__special_character;
	v->a[36735] = state(543);
	v->a[36736] = 1;
	v->a[36737] = sym_command_name;
	v->a[36738] = state(1267);
	v->a[36739] = 1;
	small_parse_table_1837(v);
}

void	small_parse_table_1837(t_small_parse_table_array *v)
{
	v->a[36740] = aux_sym__literal_repeat1;
	v->a[36741] = state(1376);
	v->a[36742] = 1;
	v->a[36743] = sym_concatenation;
	v->a[36744] = state(6771);
	v->a[36745] = 1;
	v->a[36746] = sym_subscript;
	v->a[36747] = actions(312);
	v->a[36748] = 2;
	v->a[36749] = anon_sym_LPAREN_LPAREN;
	v->a[36750] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36751] = actions(322);
	v->a[36752] = 2;
	v->a[36753] = sym_raw_string;
	v->a[36754] = sym_ansi_c_string;
	v->a[36755] = actions(336);
	v->a[36756] = 2;
	v->a[36757] = anon_sym_LT_LPAREN;
	v->a[36758] = anon_sym_GT_LPAREN;
	v->a[36759] = actions(1392);
	small_parse_table_1838(v);
}

void	small_parse_table_1838(t_small_parse_table_array *v)
{
	v->a[36760] = 2;
	v->a[36761] = anon_sym_LT_AMP_DASH;
	v->a[36762] = anon_sym_GT_AMP_DASH;
	v->a[36763] = state(3127);
	v->a[36764] = 2;
	v->a[36765] = sym_variable_assignment;
	v->a[36766] = aux_sym_command_repeat1;
	v->a[36767] = state(3581);
	v->a[36768] = 2;
	v->a[36769] = sym_file_redirect;
	v->a[36770] = sym_herestring_redirect;
	v->a[36771] = actions(1390);
	v->a[36772] = 3;
	v->a[36773] = anon_sym_GT_GT;
	v->a[36774] = anon_sym_AMP_GT_GT;
	v->a[36775] = anon_sym_GT_PIPE;
	v->a[36776] = actions(1388);
	v->a[36777] = 5;
	v->a[36778] = anon_sym_LT;
	v->a[36779] = anon_sym_GT;
	small_parse_table_1839(v);
}

void	small_parse_table_1839(t_small_parse_table_array *v)
{
	v->a[36780] = anon_sym_AMP_GT;
	v->a[36781] = anon_sym_LT_AMP;
	v->a[36782] = anon_sym_GT_AMP;
	v->a[36783] = state(1078);
	v->a[36784] = 9;
	v->a[36785] = sym_arithmetic_expansion;
	v->a[36786] = sym_brace_expression;
	v->a[36787] = sym_string;
	v->a[36788] = sym_translated_string;
	v->a[36789] = sym_number;
	v->a[36790] = sym_simple_expansion;
	v->a[36791] = sym_expansion;
	v->a[36792] = sym_command_substitution;
	v->a[36793] = sym_process_substitution;
	v->a[36794] = 6;
	v->a[36795] = actions(3);
	v->a[36796] = 1;
	v->a[36797] = sym_comment;
	v->a[36798] = actions(4672);
	v->a[36799] = 1;
	small_parse_table_1840(v);
}

/* EOF small_parse_table_367.c */
