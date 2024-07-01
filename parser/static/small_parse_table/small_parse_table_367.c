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
	v->a[36700] = actions(1085);
	v->a[36701] = 3;
	v->a[36702] = sym_file_descriptor;
	v->a[36703] = sym__bare_dollar;
	v->a[36704] = ts_builtin_sym_end;
	v->a[36705] = actions(1081);
	v->a[36706] = 26;
	v->a[36707] = anon_sym_PIPE;
	v->a[36708] = anon_sym_SEMI_SEMI;
	v->a[36709] = anon_sym_AMP_AMP;
	v->a[36710] = anon_sym_PIPE_PIPE;
	v->a[36711] = anon_sym_LT;
	v->a[36712] = anon_sym_GT;
	v->a[36713] = anon_sym_GT_GT;
	v->a[36714] = anon_sym_LT_AMP;
	v->a[36715] = anon_sym_GT_AMP;
	v->a[36716] = anon_sym_GT_PIPE;
	v->a[36717] = anon_sym_LT_AMP_DASH;
	v->a[36718] = anon_sym_GT_AMP_DASH;
	v->a[36719] = anon_sym_LT_LT;
	small_parse_table_1836(v);
}

void	small_parse_table_1836(t_small_parse_table_array *v)
{
	v->a[36720] = anon_sym_LT_LT_DASH;
	v->a[36721] = aux_sym_heredoc_redirect_token1;
	v->a[36722] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36723] = anon_sym_AMP;
	v->a[36724] = anon_sym_DOLLAR;
	v->a[36725] = anon_sym_DQUOTE;
	v->a[36726] = sym_raw_string;
	v->a[36727] = sym_number;
	v->a[36728] = anon_sym_DOLLAR_LBRACE;
	v->a[36729] = anon_sym_DOLLAR_LPAREN;
	v->a[36730] = anon_sym_BQUOTE;
	v->a[36731] = sym_word;
	v->a[36732] = anon_sym_SEMI;
	v->a[36733] = 6;
	v->a[36734] = actions(3);
	v->a[36735] = 1;
	v->a[36736] = sym_comment;
	v->a[36737] = actions(1336);
	v->a[36738] = 1;
	v->a[36739] = aux_sym_concatenation_token1;
	small_parse_table_1837(v);
}

void	small_parse_table_1837(t_small_parse_table_array *v)
{
	v->a[36740] = actions(1339);
	v->a[36741] = 1;
	v->a[36742] = sym__concat;
	v->a[36743] = state(482);
	v->a[36744] = 1;
	v->a[36745] = aux_sym_concatenation_repeat1;
	v->a[36746] = actions(1194);
	v->a[36747] = 2;
	v->a[36748] = sym_file_descriptor;
	v->a[36749] = sym__bare_dollar;
	v->a[36750] = actions(1189);
	v->a[36751] = 27;
	v->a[36752] = anon_sym_esac;
	v->a[36753] = anon_sym_PIPE;
	v->a[36754] = anon_sym_SEMI_SEMI;
	v->a[36755] = anon_sym_AMP_AMP;
	v->a[36756] = anon_sym_PIPE_PIPE;
	v->a[36757] = anon_sym_LT;
	v->a[36758] = anon_sym_GT;
	v->a[36759] = anon_sym_GT_GT;
	small_parse_table_1838(v);
}

void	small_parse_table_1838(t_small_parse_table_array *v)
{
	v->a[36760] = anon_sym_LT_AMP;
	v->a[36761] = anon_sym_GT_AMP;
	v->a[36762] = anon_sym_GT_PIPE;
	v->a[36763] = anon_sym_LT_AMP_DASH;
	v->a[36764] = anon_sym_GT_AMP_DASH;
	v->a[36765] = anon_sym_LT_LT;
	v->a[36766] = anon_sym_LT_LT_DASH;
	v->a[36767] = aux_sym_heredoc_redirect_token1;
	v->a[36768] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36769] = anon_sym_AMP;
	v->a[36770] = anon_sym_DOLLAR;
	v->a[36771] = anon_sym_DQUOTE;
	v->a[36772] = sym_raw_string;
	v->a[36773] = sym_number;
	v->a[36774] = anon_sym_DOLLAR_LBRACE;
	v->a[36775] = anon_sym_DOLLAR_LPAREN;
	v->a[36776] = anon_sym_BQUOTE;
	v->a[36777] = sym_word;
	v->a[36778] = anon_sym_SEMI;
	v->a[36779] = 6;
	small_parse_table_1839(v);
}

void	small_parse_table_1839(t_small_parse_table_array *v)
{
	v->a[36780] = actions(3);
	v->a[36781] = 1;
	v->a[36782] = sym_comment;
	v->a[36783] = actions(379);
	v->a[36784] = 1;
	v->a[36785] = sym_file_descriptor;
	v->a[36786] = actions(1346);
	v->a[36787] = 1;
	v->a[36788] = sym_variable_name;
	v->a[36789] = actions(1344);
	v->a[36790] = 2;
	v->a[36791] = aux_sym__simple_variable_name_token1;
	v->a[36792] = aux_sym__multiline_variable_name_token1;
	v->a[36793] = actions(1342);
	v->a[36794] = 9;
	v->a[36795] = anon_sym_BANG;
	v->a[36796] = anon_sym_DASH;
	v->a[36797] = anon_sym_STAR;
	v->a[36798] = anon_sym_QMARK;
	v->a[36799] = anon_sym_DOLLAR;
	small_parse_table_1840(v);
}

/* EOF small_parse_table_367.c */
