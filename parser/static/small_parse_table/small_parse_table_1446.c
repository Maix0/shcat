/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1446.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7230(t_small_parse_table_array *v)
{
	v->a[144600] = actions(8669);
	v->a[144601] = 1;
	v->a[144602] = sym__special_character;
	v->a[144603] = state(3426);
	v->a[144604] = 1;
	v->a[144605] = aux_sym__literal_repeat1;
	v->a[144606] = state(3485);
	v->a[144607] = 1;
	v->a[144608] = aux_sym_case_item_repeat1;
	v->a[144609] = 5;
	v->a[144610] = actions(57);
	v->a[144611] = 1;
	v->a[144612] = sym_comment;
	v->a[144613] = actions(8637);
	v->a[144614] = 1;
	v->a[144615] = sym__heredoc_body_beginning;
	v->a[144616] = actions(8655);
	v->a[144617] = 1;
	v->a[144618] = sym_simple_heredoc_body;
	v->a[144619] = state(3977);
	small_parse_table_7231(v);
}

void	small_parse_table_7231(t_small_parse_table_array *v)
{
	v->a[144620] = 1;
	v->a[144621] = sym_heredoc_body;
	v->a[144622] = state(2276);
	v->a[144623] = 2;
	v->a[144624] = sym__heredoc_body;
	v->a[144625] = sym__simple_heredoc_body;
	v->a[144626] = 6;
	v->a[144627] = actions(57);
	v->a[144628] = 1;
	v->a[144629] = sym_comment;
	v->a[144630] = actions(8637);
	v->a[144631] = 1;
	v->a[144632] = sym__heredoc_body_beginning;
	v->a[144633] = actions(8653);
	v->a[144634] = 1;
	v->a[144635] = sym_simple_heredoc_body;
	v->a[144636] = state(2758);
	v->a[144637] = 1;
	v->a[144638] = sym__simple_heredoc_body;
	v->a[144639] = state(2759);
	small_parse_table_7232(v);
}

void	small_parse_table_7232(t_small_parse_table_array *v)
{
	v->a[144640] = 1;
	v->a[144641] = sym__heredoc_body;
	v->a[144642] = state(3836);
	v->a[144643] = 1;
	v->a[144644] = sym_heredoc_body;
	v->a[144645] = 5;
	v->a[144646] = actions(57);
	v->a[144647] = 1;
	v->a[144648] = sym_comment;
	v->a[144649] = actions(8637);
	v->a[144650] = 1;
	v->a[144651] = sym__heredoc_body_beginning;
	v->a[144652] = actions(8653);
	v->a[144653] = 1;
	v->a[144654] = sym_simple_heredoc_body;
	v->a[144655] = state(3836);
	v->a[144656] = 1;
	v->a[144657] = sym_heredoc_body;
	v->a[144658] = state(2760);
	v->a[144659] = 2;
	small_parse_table_7233(v);
}

void	small_parse_table_7233(t_small_parse_table_array *v)
{
	v->a[144660] = sym__heredoc_body;
	v->a[144661] = sym__simple_heredoc_body;
	v->a[144662] = 4;
	v->a[144663] = actions(3);
	v->a[144664] = 1;
	v->a[144665] = sym_comment;
	v->a[144666] = actions(8428);
	v->a[144667] = 1;
	v->a[144668] = anon_sym_in;
	v->a[144669] = actions(8432);
	v->a[144670] = 1;
	v->a[144671] = aux_sym_heredoc_redirect_token1;
	v->a[144672] = actions(8430);
	v->a[144673] = 3;
	v->a[144674] = anon_sym_SEMI_SEMI;
	v->a[144675] = anon_sym_AMP;
	v->a[144676] = anon_sym_SEMI;
	v->a[144677] = 6;
	v->a[144678] = actions(57);
	v->a[144679] = 1;
	small_parse_table_7234(v);
}

void	small_parse_table_7234(t_small_parse_table_array *v)
{
	v->a[144680] = sym_comment;
	v->a[144681] = actions(8637);
	v->a[144682] = 1;
	v->a[144683] = sym__heredoc_body_beginning;
	v->a[144684] = actions(8653);
	v->a[144685] = 1;
	v->a[144686] = sym_simple_heredoc_body;
	v->a[144687] = state(2719);
	v->a[144688] = 1;
	v->a[144689] = sym__simple_heredoc_body;
	v->a[144690] = state(2793);
	v->a[144691] = 1;
	v->a[144692] = sym__heredoc_body;
	v->a[144693] = state(3836);
	v->a[144694] = 1;
	v->a[144695] = sym_heredoc_body;
	v->a[144696] = 5;
	v->a[144697] = actions(57);
	v->a[144698] = 1;
	v->a[144699] = sym_comment;
	small_parse_table_7235(v);
}

/* EOF small_parse_table_1446.c */
