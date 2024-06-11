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
	v->a[36700] = aux_sym_heredoc_redirect_token1;
	v->a[36701] = 3;
	v->a[36702] = actions(3);
	v->a[36703] = 1;
	v->a[36704] = sym_comment;
	v->a[36705] = actions(1100);
	v->a[36706] = 4;
	v->a[36707] = sym_file_descriptor;
	v->a[36708] = sym__concat;
	v->a[36709] = sym_variable_name;
	v->a[36710] = ts_builtin_sym_end;
	v->a[36711] = actions(1102);
	v->a[36712] = 29;
	v->a[36713] = anon_sym_PIPE;
	v->a[36714] = anon_sym_SEMI_SEMI;
	v->a[36715] = anon_sym_AMP_AMP;
	v->a[36716] = anon_sym_PIPE_PIPE;
	v->a[36717] = anon_sym_LT;
	v->a[36718] = anon_sym_GT;
	v->a[36719] = anon_sym_GT_GT;
	small_parse_table_1836(v);
}

void	small_parse_table_1836(t_small_parse_table_array *v)
{
	v->a[36720] = anon_sym_AMP_GT;
	v->a[36721] = anon_sym_AMP_GT_GT;
	v->a[36722] = anon_sym_LT_AMP;
	v->a[36723] = anon_sym_GT_AMP;
	v->a[36724] = anon_sym_GT_PIPE;
	v->a[36725] = anon_sym_LT_AMP_DASH;
	v->a[36726] = anon_sym_GT_AMP_DASH;
	v->a[36727] = anon_sym_LT_LT;
	v->a[36728] = anon_sym_LT_LT_DASH;
	v->a[36729] = aux_sym_heredoc_redirect_token1;
	v->a[36730] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36731] = anon_sym_AMP;
	v->a[36732] = aux_sym_concatenation_token1;
	v->a[36733] = anon_sym_DOLLAR;
	v->a[36734] = anon_sym_DQUOTE;
	v->a[36735] = sym_raw_string;
	v->a[36736] = sym_number;
	v->a[36737] = anon_sym_DOLLAR_LBRACE;
	v->a[36738] = anon_sym_DOLLAR_LPAREN;
	v->a[36739] = anon_sym_BQUOTE;
	small_parse_table_1837(v);
}

void	small_parse_table_1837(t_small_parse_table_array *v)
{
	v->a[36740] = sym_word;
	v->a[36741] = anon_sym_SEMI;
	v->a[36742] = 12;
	v->a[36743] = actions(3);
	v->a[36744] = 1;
	v->a[36745] = sym_comment;
	v->a[36746] = actions(543);
	v->a[36747] = 1;
	v->a[36748] = sym_file_descriptor;
	v->a[36749] = actions(749);
	v->a[36750] = 1;
	v->a[36751] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36752] = actions(751);
	v->a[36753] = 1;
	v->a[36754] = anon_sym_DOLLAR;
	v->a[36755] = actions(753);
	v->a[36756] = 1;
	v->a[36757] = anon_sym_DQUOTE;
	v->a[36758] = actions(755);
	v->a[36759] = 1;
	small_parse_table_1838(v);
}

void	small_parse_table_1838(t_small_parse_table_array *v)
{
	v->a[36760] = anon_sym_DOLLAR_LBRACE;
	v->a[36761] = actions(757);
	v->a[36762] = 1;
	v->a[36763] = anon_sym_DOLLAR_LPAREN;
	v->a[36764] = actions(759);
	v->a[36765] = 1;
	v->a[36766] = anon_sym_BQUOTE;
	v->a[36767] = state(573);
	v->a[36768] = 2;
	v->a[36769] = sym_concatenation;
	v->a[36770] = aux_sym_for_statement_repeat1;
	v->a[36771] = actions(1384);
	v->a[36772] = 3;
	v->a[36773] = sym_raw_string;
	v->a[36774] = sym_number;
	v->a[36775] = sym_word;
	v->a[36776] = state(941);
	v->a[36777] = 5;
	v->a[36778] = sym_arithmetic_expansion;
	v->a[36779] = sym_string;
	small_parse_table_1839(v);
}

void	small_parse_table_1839(t_small_parse_table_array *v)
{
	v->a[36780] = sym_simple_expansion;
	v->a[36781] = sym_expansion;
	v->a[36782] = sym_command_substitution;
	v->a[36783] = actions(541);
	v->a[36784] = 16;
	v->a[36785] = anon_sym_PIPE;
	v->a[36786] = anon_sym_AMP_AMP;
	v->a[36787] = anon_sym_PIPE_PIPE;
	v->a[36788] = anon_sym_LT;
	v->a[36789] = anon_sym_GT;
	v->a[36790] = anon_sym_GT_GT;
	v->a[36791] = anon_sym_AMP_GT;
	v->a[36792] = anon_sym_AMP_GT_GT;
	v->a[36793] = anon_sym_LT_AMP;
	v->a[36794] = anon_sym_GT_AMP;
	v->a[36795] = anon_sym_GT_PIPE;
	v->a[36796] = anon_sym_LT_AMP_DASH;
	v->a[36797] = anon_sym_GT_AMP_DASH;
	v->a[36798] = anon_sym_LT_LT;
	v->a[36799] = anon_sym_LT_LT_DASH;
	small_parse_table_1840(v);
}

/* EOF small_parse_table_367.c */
