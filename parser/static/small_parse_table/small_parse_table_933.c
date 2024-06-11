/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_933.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4665(t_small_parse_table_array *v)
{
	v->a[93300] = anon_sym__;
	v->a[93301] = 6;
	v->a[93302] = actions(3);
	v->a[93303] = 1;
	v->a[93304] = sym_comment;
	v->a[93305] = actions(3636);
	v->a[93306] = 1;
	v->a[93307] = sym_string_content;
	v->a[93308] = actions(3640);
	v->a[93309] = 1;
	v->a[93310] = sym_variable_name;
	v->a[93311] = actions(3770);
	v->a[93312] = 1;
	v->a[93313] = anon_sym_DQUOTE;
	v->a[93314] = actions(3638);
	v->a[93315] = 2;
	v->a[93316] = aux_sym__simple_variable_name_token1;
	v->a[93317] = aux_sym__multiline_variable_name_token1;
	v->a[93318] = actions(3632);
	v->a[93319] = 9;
	small_parse_table_4666(v);
}

void	small_parse_table_4666(t_small_parse_table_array *v)
{
	v->a[93320] = anon_sym_BANG;
	v->a[93321] = anon_sym_DASH;
	v->a[93322] = anon_sym_STAR;
	v->a[93323] = anon_sym_QMARK;
	v->a[93324] = anon_sym_DOLLAR;
	v->a[93325] = anon_sym_POUND;
	v->a[93326] = anon_sym_AT;
	v->a[93327] = anon_sym_0;
	v->a[93328] = anon_sym__;
	v->a[93329] = 6;
	v->a[93330] = actions(3);
	v->a[93331] = 1;
	v->a[93332] = sym_comment;
	v->a[93333] = actions(3636);
	v->a[93334] = 1;
	v->a[93335] = sym_string_content;
	v->a[93336] = actions(3640);
	v->a[93337] = 1;
	v->a[93338] = sym_variable_name;
	v->a[93339] = actions(3772);
	small_parse_table_4667(v);
}

void	small_parse_table_4667(t_small_parse_table_array *v)
{
	v->a[93340] = 1;
	v->a[93341] = anon_sym_DQUOTE;
	v->a[93342] = actions(3638);
	v->a[93343] = 2;
	v->a[93344] = aux_sym__simple_variable_name_token1;
	v->a[93345] = aux_sym__multiline_variable_name_token1;
	v->a[93346] = actions(3632);
	v->a[93347] = 9;
	v->a[93348] = anon_sym_BANG;
	v->a[93349] = anon_sym_DASH;
	v->a[93350] = anon_sym_STAR;
	v->a[93351] = anon_sym_QMARK;
	v->a[93352] = anon_sym_DOLLAR;
	v->a[93353] = anon_sym_POUND;
	v->a[93354] = anon_sym_AT;
	v->a[93355] = anon_sym_0;
	v->a[93356] = anon_sym__;
	v->a[93357] = 5;
	v->a[93358] = actions(3);
	v->a[93359] = 1;
	small_parse_table_4668(v);
}

void	small_parse_table_4668(t_small_parse_table_array *v)
{
	v->a[93360] = sym_comment;
	v->a[93361] = actions(3586);
	v->a[93362] = 1;
	v->a[93363] = aux_sym_concatenation_token1;
	v->a[93364] = actions(3774);
	v->a[93365] = 1;
	v->a[93366] = sym__concat;
	v->a[93367] = state(1748);
	v->a[93368] = 1;
	v->a[93369] = aux_sym_concatenation_repeat1;
	v->a[93370] = actions(974);
	v->a[93371] = 10;
	v->a[93372] = aux_sym_heredoc_redirect_token1;
	v->a[93373] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[93374] = anon_sym_DOLLAR;
	v->a[93375] = anon_sym_DQUOTE;
	v->a[93376] = sym_raw_string;
	v->a[93377] = sym_number;
	v->a[93378] = anon_sym_DOLLAR_LBRACE;
	v->a[93379] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4669(v);
}

void	small_parse_table_4669(t_small_parse_table_array *v)
{
	v->a[93380] = anon_sym_BQUOTE;
	v->a[93381] = sym_word;
	v->a[93382] = 7;
	v->a[93383] = actions(3);
	v->a[93384] = 1;
	v->a[93385] = sym_comment;
	v->a[93386] = actions(3776);
	v->a[93387] = 1;
	v->a[93388] = anon_sym_RBRACE;
	v->a[93389] = actions(3780);
	v->a[93390] = 1;
	v->a[93391] = aux_sym__simple_variable_name_token1;
	v->a[93392] = actions(3784);
	v->a[93393] = 1;
	v->a[93394] = sym_variable_name;
	v->a[93395] = state(2337);
	v->a[93396] = 1;
	v->a[93397] = sym__expansion_body;
	v->a[93398] = actions(3782);
	v->a[93399] = 2;
	small_parse_table_4670(v);
}

/* EOF small_parse_table_933.c */
