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
	v->a[93300] = anon_sym_RPAREN;
	v->a[93301] = state(2031);
	v->a[93302] = 1;
	v->a[93303] = aux_sym_concatenation_repeat1;
	v->a[93304] = state(2092);
	v->a[93305] = 1;
	v->a[93306] = aux_sym__case_item_last_repeat1;
	v->a[93307] = actions(3990);
	v->a[93308] = 2;
	v->a[93309] = sym__concat;
	v->a[93310] = aux_sym_concatenation_token1;
	v->a[93311] = 5;
	v->a[93312] = actions(3);
	v->a[93313] = 1;
	v->a[93314] = sym_comment;
	v->a[93315] = actions(3907);
	v->a[93316] = 1;
	v->a[93317] = aux_sym_heredoc_redirect_token1;
	v->a[93318] = actions(3992);
	v->a[93319] = 1;
	small_parse_table_4666(v);
}

void	small_parse_table_4666(t_small_parse_table_array *v)
{
	v->a[93320] = anon_sym_in;
	v->a[93321] = state(2106);
	v->a[93322] = 1;
	v->a[93323] = sym_terminator;
	v->a[93324] = actions(2481);
	v->a[93325] = 3;
	v->a[93326] = anon_sym_SEMI_SEMI;
	v->a[93327] = anon_sym_AMP;
	v->a[93328] = anon_sym_SEMI;
	v->a[93329] = 3;
	v->a[93330] = actions(1074);
	v->a[93331] = 1;
	v->a[93332] = sym_comment;
	v->a[93333] = actions(1116);
	v->a[93334] = 1;
	v->a[93335] = anon_sym_DOLLAR;
	v->a[93336] = actions(1118);
	v->a[93337] = 5;
	v->a[93338] = sym_heredoc_content;
	v->a[93339] = sym_heredoc_end;
	small_parse_table_4667(v);
}

void	small_parse_table_4667(t_small_parse_table_array *v)
{
	v->a[93340] = anon_sym_DOLLAR_LBRACE;
	v->a[93341] = anon_sym_DOLLAR_LPAREN;
	v->a[93342] = anon_sym_BQUOTE;
	v->a[93343] = 6;
	v->a[93344] = actions(1074);
	v->a[93345] = 1;
	v->a[93346] = sym_comment;
	v->a[93347] = actions(3986);
	v->a[93348] = 1;
	v->a[93349] = anon_sym_PIPE;
	v->a[93350] = actions(3994);
	v->a[93351] = 1;
	v->a[93352] = anon_sym_RPAREN;
	v->a[93353] = state(2031);
	v->a[93354] = 1;
	v->a[93355] = aux_sym_concatenation_repeat1;
	v->a[93356] = state(2097);
	v->a[93357] = 1;
	v->a[93358] = aux_sym__case_item_last_repeat1;
	v->a[93359] = actions(3990);
	small_parse_table_4668(v);
}

void	small_parse_table_4668(t_small_parse_table_array *v)
{
	v->a[93360] = 2;
	v->a[93361] = sym__concat;
	v->a[93362] = aux_sym_concatenation_token1;
	v->a[93363] = 5;
	v->a[93364] = actions(3);
	v->a[93365] = 1;
	v->a[93366] = sym_comment;
	v->a[93367] = actions(3907);
	v->a[93368] = 1;
	v->a[93369] = aux_sym_heredoc_redirect_token1;
	v->a[93370] = actions(3996);
	v->a[93371] = 1;
	v->a[93372] = anon_sym_in;
	v->a[93373] = state(2121);
	v->a[93374] = 1;
	v->a[93375] = sym_terminator;
	v->a[93376] = actions(2481);
	v->a[93377] = 3;
	v->a[93378] = anon_sym_SEMI_SEMI;
	v->a[93379] = anon_sym_AMP;
	small_parse_table_4669(v);
}

void	small_parse_table_4669(t_small_parse_table_array *v)
{
	v->a[93380] = anon_sym_SEMI;
	v->a[93381] = 6;
	v->a[93382] = actions(1074);
	v->a[93383] = 1;
	v->a[93384] = sym_comment;
	v->a[93385] = actions(3982);
	v->a[93386] = 1;
	v->a[93387] = anon_sym_elif;
	v->a[93388] = actions(3984);
	v->a[93389] = 1;
	v->a[93390] = anon_sym_else;
	v->a[93391] = actions(3998);
	v->a[93392] = 1;
	v->a[93393] = anon_sym_fi;
	v->a[93394] = state(2204);
	v->a[93395] = 1;
	v->a[93396] = sym_else_clause;
	v->a[93397] = state(2065);
	v->a[93398] = 2;
	v->a[93399] = sym_elif_clause;
	small_parse_table_4670(v);
}

/* EOF small_parse_table_933.c */
