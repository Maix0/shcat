/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2468.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12340(t_small_parse_table_array *v)
{
	v->a[246800] = anon_sym_SEMI;
	v->a[246801] = anon_sym_PIPE_PIPE;
	v->a[246802] = anon_sym_AMP_AMP;
	v->a[246803] = anon_sym_PIPE;
	v->a[246804] = anon_sym_AMP;
	v->a[246805] = anon_sym_LT;
	v->a[246806] = anon_sym_GT;
	v->a[246807] = anon_sym_LT_LT;
	v->a[246808] = anon_sym_GT_GT;
	v->a[246809] = anon_sym_RPAREN;
	v->a[246810] = anon_sym_SEMI_SEMI;
	v->a[246811] = anon_sym_PIPE_AMP;
	v->a[246812] = anon_sym_AMP_GT;
	v->a[246813] = anon_sym_AMP_GT_GT;
	v->a[246814] = anon_sym_LT_AMP;
	v->a[246815] = anon_sym_GT_AMP;
	v->a[246816] = anon_sym_GT_PIPE;
	v->a[246817] = anon_sym_LT_AMP_DASH;
	v->a[246818] = anon_sym_GT_AMP_DASH;
	v->a[246819] = anon_sym_LT_LT_DASH;
	small_parse_table_12341(v);
}

void	small_parse_table_12341(t_small_parse_table_array *v)
{
	v->a[246820] = anon_sym_LT_LT_LT;
	v->a[246821] = aux_sym_concatenation_token1;
	v->a[246822] = anon_sym_BQUOTE;
	v->a[246823] = 13;
	v->a[246824] = actions(3);
	v->a[246825] = 1;
	v->a[246826] = sym_comment;
	v->a[246827] = actions(2719);
	v->a[246828] = 1;
	v->a[246829] = anon_sym_RPAREN;
	v->a[246830] = actions(4384);
	v->a[246831] = 1;
	v->a[246832] = aux_sym_heredoc_redirect_token1;
	v->a[246833] = actions(11508);
	v->a[246834] = 1;
	v->a[246835] = anon_sym_LT_LT_LT;
	v->a[246836] = actions(11544);
	v->a[246837] = 1;
	v->a[246838] = sym_file_descriptor;
	v->a[246839] = state(4912);
	small_parse_table_12342(v);
}

void	small_parse_table_12342(t_small_parse_table_array *v)
{
	v->a[246840] = 1;
	v->a[246841] = sym_herestring_redirect;
	v->a[246842] = actions(4253);
	v->a[246843] = 2;
	v->a[246844] = anon_sym_PIPE;
	v->a[246845] = anon_sym_PIPE_AMP;
	v->a[246846] = actions(4692);
	v->a[246847] = 2;
	v->a[246848] = anon_sym_LT_LT;
	v->a[246849] = anon_sym_LT_LT_DASH;
	v->a[246850] = actions(4809);
	v->a[246851] = 2;
	v->a[246852] = anon_sym_PIPE_PIPE;
	v->a[246853] = anon_sym_AMP_AMP;
	v->a[246854] = actions(11542);
	v->a[246855] = 2;
	v->a[246856] = anon_sym_LT_AMP_DASH;
	v->a[246857] = anon_sym_GT_AMP_DASH;
	v->a[246858] = actions(4378);
	v->a[246859] = 3;
	small_parse_table_12343(v);
}

void	small_parse_table_12343(t_small_parse_table_array *v)
{
	v->a[246860] = anon_sym_SEMI;
	v->a[246861] = anon_sym_AMP;
	v->a[246862] = anon_sym_SEMI_SEMI;
	v->a[246863] = state(4746);
	v->a[246864] = 3;
	v->a[246865] = sym_file_redirect;
	v->a[246866] = sym_heredoc_redirect;
	v->a[246867] = aux_sym_redirected_statement_repeat1;
	v->a[246868] = actions(11540);
	v->a[246869] = 8;
	v->a[246870] = anon_sym_LT;
	v->a[246871] = anon_sym_GT;
	v->a[246872] = anon_sym_GT_GT;
	v->a[246873] = anon_sym_AMP_GT;
	v->a[246874] = anon_sym_AMP_GT_GT;
	v->a[246875] = anon_sym_LT_AMP;
	v->a[246876] = anon_sym_GT_AMP;
	v->a[246877] = anon_sym_GT_PIPE;
	v->a[246878] = 13;
	v->a[246879] = actions(3);
	small_parse_table_12344(v);
}

void	small_parse_table_12344(t_small_parse_table_array *v)
{
	v->a[246880] = 1;
	v->a[246881] = sym_comment;
	v->a[246882] = actions(2719);
	v->a[246883] = 1;
	v->a[246884] = anon_sym_BQUOTE;
	v->a[246885] = actions(5357);
	v->a[246886] = 1;
	v->a[246887] = aux_sym_heredoc_redirect_token1;
	v->a[246888] = actions(11410);
	v->a[246889] = 1;
	v->a[246890] = anon_sym_LT_LT_LT;
	v->a[246891] = actions(11489);
	v->a[246892] = 1;
	v->a[246893] = sym_file_descriptor;
	v->a[246894] = state(4912);
	v->a[246895] = 1;
	v->a[246896] = sym_herestring_redirect;
	v->a[246897] = actions(4253);
	v->a[246898] = 2;
	v->a[246899] = anon_sym_PIPE;
	small_parse_table_12345(v);
}

/* EOF small_parse_table_2468.c */
