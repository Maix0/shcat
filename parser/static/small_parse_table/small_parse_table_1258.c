/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1258.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6290(t_small_parse_table_array *v)
{
	v->a[125800] = sym__concat;
	v->a[125801] = anon_sym_PIPE_AMP;
	v->a[125802] = anon_sym_AMP_AMP;
	v->a[125803] = anon_sym_PIPE_PIPE;
	v->a[125804] = anon_sym_GT_GT;
	v->a[125805] = anon_sym_AMP_GT_GT;
	v->a[125806] = anon_sym_GT_PIPE;
	v->a[125807] = anon_sym_LT_AMP_DASH;
	v->a[125808] = anon_sym_GT_AMP_DASH;
	v->a[125809] = anon_sym_LT_LT_DASH;
	v->a[125810] = aux_sym_concatenation_token1;
	v->a[125811] = 5;
	v->a[125812] = actions(57);
	v->a[125813] = 1;
	v->a[125814] = sym_comment;
	v->a[125815] = actions(7210);
	v->a[125816] = 1;
	v->a[125817] = sym__special_character;
	v->a[125818] = state(2672);
	v->a[125819] = 1;
	small_parse_table_6291(v);
}

void	small_parse_table_6291(t_small_parse_table_array *v)
{
	v->a[125820] = aux_sym__literal_repeat1;
	v->a[125821] = actions(3195);
	v->a[125822] = 7;
	v->a[125823] = anon_sym_PIPE;
	v->a[125824] = anon_sym_LT;
	v->a[125825] = anon_sym_GT;
	v->a[125826] = anon_sym_AMP_GT;
	v->a[125827] = anon_sym_LT_AMP;
	v->a[125828] = anon_sym_GT_AMP;
	v->a[125829] = anon_sym_LT_LT;
	v->a[125830] = actions(3197);
	v->a[125831] = 10;
	v->a[125832] = sym_file_descriptor;
	v->a[125833] = anon_sym_PIPE_AMP;
	v->a[125834] = anon_sym_AMP_AMP;
	v->a[125835] = anon_sym_PIPE_PIPE;
	v->a[125836] = anon_sym_GT_GT;
	v->a[125837] = anon_sym_AMP_GT_GT;
	v->a[125838] = anon_sym_GT_PIPE;
	v->a[125839] = anon_sym_LT_AMP_DASH;
	small_parse_table_6292(v);
}

void	small_parse_table_6292(t_small_parse_table_array *v)
{
	v->a[125840] = anon_sym_GT_AMP_DASH;
	v->a[125841] = anon_sym_LT_LT_DASH;
	v->a[125842] = 3;
	v->a[125843] = actions(57);
	v->a[125844] = 1;
	v->a[125845] = sym_comment;
	v->a[125846] = actions(3022);
	v->a[125847] = 7;
	v->a[125848] = anon_sym_PIPE;
	v->a[125849] = anon_sym_LT;
	v->a[125850] = anon_sym_GT;
	v->a[125851] = anon_sym_AMP_GT;
	v->a[125852] = anon_sym_LT_AMP;
	v->a[125853] = anon_sym_GT_AMP;
	v->a[125854] = anon_sym_LT_LT;
	v->a[125855] = actions(3024);
	v->a[125856] = 12;
	v->a[125857] = sym_file_descriptor;
	v->a[125858] = sym__concat;
	v->a[125859] = anon_sym_PIPE_AMP;
	small_parse_table_6293(v);
}

void	small_parse_table_6293(t_small_parse_table_array *v)
{
	v->a[125860] = anon_sym_AMP_AMP;
	v->a[125861] = anon_sym_PIPE_PIPE;
	v->a[125862] = anon_sym_GT_GT;
	v->a[125863] = anon_sym_AMP_GT_GT;
	v->a[125864] = anon_sym_GT_PIPE;
	v->a[125865] = anon_sym_LT_AMP_DASH;
	v->a[125866] = anon_sym_GT_AMP_DASH;
	v->a[125867] = anon_sym_LT_LT_DASH;
	v->a[125868] = aux_sym_concatenation_token1;
	v->a[125869] = 7;
	v->a[125870] = actions(3);
	v->a[125871] = 1;
	v->a[125872] = sym_comment;
	v->a[125873] = actions(5615);
	v->a[125874] = 1;
	v->a[125875] = aux_sym_heredoc_redirect_token1;
	v->a[125876] = actions(7181);
	v->a[125877] = 1;
	v->a[125878] = sym_file_descriptor;
	v->a[125879] = state(2305);
	small_parse_table_6294(v);
}

void	small_parse_table_6294(t_small_parse_table_array *v)
{
	v->a[125880] = 1;
	v->a[125881] = sym_file_redirect;
	v->a[125882] = actions(7132);
	v->a[125883] = 2;
	v->a[125884] = anon_sym_LT_AMP_DASH;
	v->a[125885] = anon_sym_GT_AMP_DASH;
	v->a[125886] = actions(5613);
	v->a[125887] = 6;
	v->a[125888] = anon_sym_PIPE;
	v->a[125889] = anon_sym_PIPE_AMP;
	v->a[125890] = anon_sym_AMP_AMP;
	v->a[125891] = anon_sym_PIPE_PIPE;
	v->a[125892] = anon_sym_LT_LT;
	v->a[125893] = anon_sym_LT_LT_DASH;
	v->a[125894] = actions(7130);
	v->a[125895] = 8;
	v->a[125896] = anon_sym_LT;
	v->a[125897] = anon_sym_GT;
	v->a[125898] = anon_sym_GT_GT;
	v->a[125899] = anon_sym_AMP_GT;
	small_parse_table_6295(v);
}

/* EOF small_parse_table_1258.c */
