/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_758.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3790(t_small_parse_table_array *v)
{
	v->a[75800] = actions(3);
	v->a[75801] = 1;
	v->a[75802] = sym_comment;
	v->a[75803] = actions(840);
	v->a[75804] = 1;
	v->a[75805] = anon_sym_RPAREN;
	v->a[75806] = actions(2083);
	v->a[75807] = 1;
	v->a[75808] = sym_file_descriptor;
	v->a[75809] = actions(2800);
	v->a[75810] = 1;
	v->a[75811] = anon_sym_SEMI_SEMI;
	v->a[75812] = actions(2802);
	v->a[75813] = 1;
	v->a[75814] = aux_sym_heredoc_redirect_token1;
	v->a[75815] = actions(2804);
	v->a[75816] = 1;
	v->a[75817] = anon_sym_AMP;
	v->a[75818] = actions(2806);
	v->a[75819] = 1;
	small_parse_table_3791(v);
}

void	small_parse_table_3791(t_small_parse_table_array *v)
{
	v->a[75820] = anon_sym_SEMI;
	v->a[75821] = actions(859);
	v->a[75822] = 2;
	v->a[75823] = anon_sym_AMP_AMP;
	v->a[75824] = anon_sym_PIPE_PIPE;
	v->a[75825] = actions(861);
	v->a[75826] = 2;
	v->a[75827] = anon_sym_LT_LT;
	v->a[75828] = anon_sym_LT_LT_DASH;
	v->a[75829] = actions(2079);
	v->a[75830] = 2;
	v->a[75831] = anon_sym_LT_AMP_DASH;
	v->a[75832] = anon_sym_GT_AMP_DASH;
	v->a[75833] = state(1283);
	v->a[75834] = 3;
	v->a[75835] = sym_file_redirect;
	v->a[75836] = sym_heredoc_redirect;
	v->a[75837] = aux_sym_redirected_statement_repeat1;
	v->a[75838] = actions(2077);
	v->a[75839] = 8;
	small_parse_table_3792(v);
}

void	small_parse_table_3792(t_small_parse_table_array *v)
{
	v->a[75840] = anon_sym_LT;
	v->a[75841] = anon_sym_GT;
	v->a[75842] = anon_sym_GT_GT;
	v->a[75843] = anon_sym_AMP_GT;
	v->a[75844] = anon_sym_AMP_GT_GT;
	v->a[75845] = anon_sym_LT_AMP;
	v->a[75846] = anon_sym_GT_AMP;
	v->a[75847] = anon_sym_GT_PIPE;
	v->a[75848] = 12;
	v->a[75849] = actions(3);
	v->a[75850] = 1;
	v->a[75851] = sym_comment;
	v->a[75852] = actions(807);
	v->a[75853] = 1;
	v->a[75854] = anon_sym_PIPE;
	v->a[75855] = actions(840);
	v->a[75856] = 1;
	v->a[75857] = anon_sym_SEMI_SEMI;
	v->a[75858] = actions(2543);
	v->a[75859] = 1;
	small_parse_table_3793(v);
}

void	small_parse_table_3793(t_small_parse_table_array *v)
{
	v->a[75860] = aux_sym_heredoc_redirect_token1;
	v->a[75861] = actions(2545);
	v->a[75862] = 1;
	v->a[75863] = anon_sym_AMP;
	v->a[75864] = actions(2547);
	v->a[75865] = 1;
	v->a[75866] = anon_sym_SEMI;
	v->a[75867] = actions(2602);
	v->a[75868] = 1;
	v->a[75869] = sym_file_descriptor;
	v->a[75870] = actions(861);
	v->a[75871] = 2;
	v->a[75872] = anon_sym_LT_LT;
	v->a[75873] = anon_sym_LT_LT_DASH;
	v->a[75874] = actions(965);
	v->a[75875] = 2;
	v->a[75876] = anon_sym_AMP_AMP;
	v->a[75877] = anon_sym_PIPE_PIPE;
	v->a[75878] = actions(2598);
	v->a[75879] = 2;
	small_parse_table_3794(v);
}

void	small_parse_table_3794(t_small_parse_table_array *v)
{
	v->a[75880] = anon_sym_LT_AMP_DASH;
	v->a[75881] = anon_sym_GT_AMP_DASH;
	v->a[75882] = state(1322);
	v->a[75883] = 3;
	v->a[75884] = sym_file_redirect;
	v->a[75885] = sym_heredoc_redirect;
	v->a[75886] = aux_sym_redirected_statement_repeat1;
	v->a[75887] = actions(2596);
	v->a[75888] = 8;
	v->a[75889] = anon_sym_LT;
	v->a[75890] = anon_sym_GT;
	v->a[75891] = anon_sym_GT_GT;
	v->a[75892] = anon_sym_AMP_GT;
	v->a[75893] = anon_sym_AMP_GT_GT;
	v->a[75894] = anon_sym_LT_AMP;
	v->a[75895] = anon_sym_GT_AMP;
	v->a[75896] = anon_sym_GT_PIPE;
	v->a[75897] = 3;
	v->a[75898] = actions(3);
	v->a[75899] = 1;
	small_parse_table_3795(v);
}

/* EOF small_parse_table_758.c */
