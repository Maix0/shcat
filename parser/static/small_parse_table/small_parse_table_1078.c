/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1078.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5390(t_small_parse_table_array *v)
{
	v->a[107800] = anon_sym_PIPE;
	v->a[107801] = anon_sym_RPAREN;
	v->a[107802] = anon_sym_SEMI_SEMI;
	v->a[107803] = anon_sym_PIPE_AMP;
	v->a[107804] = anon_sym_AMP_AMP;
	v->a[107805] = anon_sym_PIPE_PIPE;
	v->a[107806] = anon_sym_LT;
	v->a[107807] = anon_sym_GT;
	v->a[107808] = anon_sym_GT_GT;
	v->a[107809] = anon_sym_AMP_GT;
	v->a[107810] = anon_sym_AMP_GT_GT;
	v->a[107811] = anon_sym_LT_AMP;
	v->a[107812] = anon_sym_GT_AMP;
	v->a[107813] = anon_sym_GT_PIPE;
	v->a[107814] = anon_sym_LT_AMP_DASH;
	v->a[107815] = anon_sym_GT_AMP_DASH;
	v->a[107816] = anon_sym_LT_LT;
	v->a[107817] = anon_sym_LT_LT_DASH;
	v->a[107818] = anon_sym_AMP;
	v->a[107819] = anon_sym_BQUOTE;
	small_parse_table_5391(v);
}

void	small_parse_table_5391(t_small_parse_table_array *v)
{
	v->a[107820] = anon_sym_SEMI;
	v->a[107821] = 3;
	v->a[107822] = actions(3);
	v->a[107823] = 1;
	v->a[107824] = sym_comment;
	v->a[107825] = actions(6197);
	v->a[107826] = 2;
	v->a[107827] = sym_file_descriptor;
	v->a[107828] = aux_sym_heredoc_redirect_token1;
	v->a[107829] = actions(6199);
	v->a[107830] = 22;
	v->a[107831] = anon_sym_esac;
	v->a[107832] = anon_sym_PIPE;
	v->a[107833] = anon_sym_SEMI_SEMI;
	v->a[107834] = anon_sym_SEMI_AMP;
	v->a[107835] = anon_sym_SEMI_SEMI_AMP;
	v->a[107836] = anon_sym_PIPE_AMP;
	v->a[107837] = anon_sym_AMP_AMP;
	v->a[107838] = anon_sym_PIPE_PIPE;
	v->a[107839] = anon_sym_LT;
	small_parse_table_5392(v);
}

void	small_parse_table_5392(t_small_parse_table_array *v)
{
	v->a[107840] = anon_sym_GT;
	v->a[107841] = anon_sym_GT_GT;
	v->a[107842] = anon_sym_AMP_GT;
	v->a[107843] = anon_sym_AMP_GT_GT;
	v->a[107844] = anon_sym_LT_AMP;
	v->a[107845] = anon_sym_GT_AMP;
	v->a[107846] = anon_sym_GT_PIPE;
	v->a[107847] = anon_sym_LT_AMP_DASH;
	v->a[107848] = anon_sym_GT_AMP_DASH;
	v->a[107849] = anon_sym_LT_LT;
	v->a[107850] = anon_sym_LT_LT_DASH;
	v->a[107851] = anon_sym_AMP;
	v->a[107852] = anon_sym_SEMI;
	v->a[107853] = 17;
	v->a[107854] = actions(57);
	v->a[107855] = 1;
	v->a[107856] = sym_comment;
	v->a[107857] = actions(5545);
	v->a[107858] = 1;
	v->a[107859] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5393(v);
}

void	small_parse_table_5393(t_small_parse_table_array *v)
{
	v->a[107860] = actions(5547);
	v->a[107861] = 1;
	v->a[107862] = anon_sym_DOLLAR;
	v->a[107863] = actions(5549);
	v->a[107864] = 1;
	v->a[107865] = sym__special_character;
	v->a[107866] = actions(5551);
	v->a[107867] = 1;
	v->a[107868] = anon_sym_DQUOTE;
	v->a[107869] = actions(5555);
	v->a[107870] = 1;
	v->a[107871] = aux_sym_number_token1;
	v->a[107872] = actions(5557);
	v->a[107873] = 1;
	v->a[107874] = aux_sym_number_token2;
	v->a[107875] = actions(5559);
	v->a[107876] = 1;
	v->a[107877] = anon_sym_DOLLAR_LBRACE;
	v->a[107878] = actions(5561);
	v->a[107879] = 1;
	small_parse_table_5394(v);
}

void	small_parse_table_5394(t_small_parse_table_array *v)
{
	v->a[107880] = anon_sym_DOLLAR_LPAREN;
	v->a[107881] = actions(5563);
	v->a[107882] = 1;
	v->a[107883] = anon_sym_BQUOTE;
	v->a[107884] = actions(5565);
	v->a[107885] = 1;
	v->a[107886] = anon_sym_DOLLAR_BQUOTE;
	v->a[107887] = actions(5571);
	v->a[107888] = 1;
	v->a[107889] = sym__brace_start;
	v->a[107890] = actions(6233);
	v->a[107891] = 1;
	v->a[107892] = sym_word;
	v->a[107893] = state(980);
	v->a[107894] = 1;
	v->a[107895] = aux_sym__literal_repeat1;
	v->a[107896] = actions(6235);
	v->a[107897] = 2;
	v->a[107898] = sym_test_operator;
	v->a[107899] = sym_raw_string;
	small_parse_table_5395(v);
}

/* EOF small_parse_table_1078.c */
