/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3143.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15715(t_small_parse_table_array *v)
{
	v->a[314300] = 1;
	v->a[314301] = sym_heredoc_body;
	v->a[314302] = 5;
	v->a[314303] = actions(71);
	v->a[314304] = 1;
	v->a[314305] = sym_comment;
	v->a[314306] = actions(14710);
	v->a[314307] = 1;
	v->a[314308] = sym__heredoc_body_beginning;
	v->a[314309] = actions(14722);
	v->a[314310] = 1;
	v->a[314311] = sym_simple_heredoc_body;
	v->a[314312] = state(6845);
	v->a[314313] = 1;
	v->a[314314] = sym_heredoc_body;
	v->a[314315] = state(4961);
	v->a[314316] = 2;
	v->a[314317] = sym__heredoc_body;
	v->a[314318] = sym__simple_heredoc_body;
	v->a[314319] = 6;
	small_parse_table_15716(v);
}

void	small_parse_table_15716(t_small_parse_table_array *v)
{
	v->a[314320] = actions(71);
	v->a[314321] = 1;
	v->a[314322] = sym_comment;
	v->a[314323] = actions(14710);
	v->a[314324] = 1;
	v->a[314325] = sym__heredoc_body_beginning;
	v->a[314326] = actions(14757);
	v->a[314327] = 1;
	v->a[314328] = sym_simple_heredoc_body;
	v->a[314329] = state(5565);
	v->a[314330] = 1;
	v->a[314331] = sym__heredoc_body;
	v->a[314332] = state(5589);
	v->a[314333] = 1;
	v->a[314334] = sym__simple_heredoc_body;
	v->a[314335] = state(7011);
	v->a[314336] = 1;
	v->a[314337] = sym_heredoc_body;
	v->a[314338] = 4;
	v->a[314339] = actions(71);
	small_parse_table_15717(v);
}

void	small_parse_table_15717(t_small_parse_table_array *v)
{
	v->a[314340] = 1;
	v->a[314341] = sym_comment;
	v->a[314342] = state(6460);
	v->a[314343] = 1;
	v->a[314344] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[314345] = actions(14798);
	v->a[314346] = 2;
	v->a[314347] = anon_sym_SLASH;
	v->a[314348] = anon_sym_RBRACE3;
	v->a[314349] = actions(14800);
	v->a[314350] = 2;
	v->a[314351] = sym__concat;
	v->a[314352] = aux_sym_concatenation_token1;
	v->a[314353] = 6;
	v->a[314354] = actions(71);
	v->a[314355] = 1;
	v->a[314356] = sym_comment;
	v->a[314357] = actions(14710);
	v->a[314358] = 1;
	v->a[314359] = sym__heredoc_body_beginning;
	small_parse_table_15718(v);
}

void	small_parse_table_15718(t_small_parse_table_array *v)
{
	v->a[314360] = actions(14757);
	v->a[314361] = 1;
	v->a[314362] = sym_simple_heredoc_body;
	v->a[314363] = state(5586);
	v->a[314364] = 1;
	v->a[314365] = sym__simple_heredoc_body;
	v->a[314366] = state(5590);
	v->a[314367] = 1;
	v->a[314368] = sym__heredoc_body;
	v->a[314369] = state(7011);
	v->a[314370] = 1;
	v->a[314371] = sym_heredoc_body;
	v->a[314372] = 6;
	v->a[314373] = actions(71);
	v->a[314374] = 1;
	v->a[314375] = sym_comment;
	v->a[314376] = actions(14710);
	v->a[314377] = 1;
	v->a[314378] = sym__heredoc_body_beginning;
	v->a[314379] = actions(14712);
	small_parse_table_15719(v);
}

void	small_parse_table_15719(t_small_parse_table_array *v)
{
	v->a[314380] = 1;
	v->a[314381] = sym_simple_heredoc_body;
	v->a[314382] = state(5617);
	v->a[314383] = 1;
	v->a[314384] = sym__simple_heredoc_body;
	v->a[314385] = state(5638);
	v->a[314386] = 1;
	v->a[314387] = sym__heredoc_body;
	v->a[314388] = state(7466);
	v->a[314389] = 1;
	v->a[314390] = sym_heredoc_body;
	v->a[314391] = 5;
	v->a[314392] = actions(3);
	v->a[314393] = 1;
	v->a[314394] = sym_comment;
	v->a[314395] = actions(14805);
	v->a[314396] = 1;
	v->a[314397] = anon_sym_COMMA;
	v->a[314398] = actions(14808);
	v->a[314399] = 1;
	small_parse_table_15720(v);
}

/* EOF small_parse_table_3143.c */
