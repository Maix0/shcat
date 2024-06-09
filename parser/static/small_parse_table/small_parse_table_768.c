/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_768.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3840(t_small_parse_table_array *v)
{
	v->a[76800] = anon_sym_GT_AMP;
	v->a[76801] = anon_sym_GT_PIPE;
	v->a[76802] = anon_sym_LT_AMP_DASH;
	v->a[76803] = anon_sym_GT_AMP_DASH;
	v->a[76804] = anon_sym_LT_LT;
	v->a[76805] = anon_sym_LT_LT_DASH;
	v->a[76806] = 3;
	v->a[76807] = actions(1404);
	v->a[76808] = 1;
	v->a[76809] = sym_comment;
	v->a[76810] = actions(1257);
	v->a[76811] = 7;
	v->a[76812] = anon_sym_PIPE;
	v->a[76813] = anon_sym_LT;
	v->a[76814] = anon_sym_GT;
	v->a[76815] = anon_sym_AMP_GT;
	v->a[76816] = anon_sym_LT_AMP;
	v->a[76817] = anon_sym_GT_AMP;
	v->a[76818] = anon_sym_LT_LT;
	v->a[76819] = actions(1255);
	small_parse_table_3841(v);
}

void	small_parse_table_3841(t_small_parse_table_array *v)
{
	v->a[76820] = 11;
	v->a[76821] = sym_file_descriptor;
	v->a[76822] = sym__concat;
	v->a[76823] = anon_sym_AMP_AMP;
	v->a[76824] = anon_sym_PIPE_PIPE;
	v->a[76825] = anon_sym_GT_GT;
	v->a[76826] = anon_sym_AMP_GT_GT;
	v->a[76827] = anon_sym_GT_PIPE;
	v->a[76828] = anon_sym_LT_AMP_DASH;
	v->a[76829] = anon_sym_GT_AMP_DASH;
	v->a[76830] = anon_sym_LT_LT_DASH;
	v->a[76831] = aux_sym_concatenation_token1;
	v->a[76832] = 9;
	v->a[76833] = actions(1062);
	v->a[76834] = 1;
	v->a[76835] = anon_sym_LT_LT;
	v->a[76836] = actions(1404);
	v->a[76837] = 1;
	v->a[76838] = sym_comment;
	v->a[76839] = actions(2761);
	small_parse_table_3842(v);
}

void	small_parse_table_3842(t_small_parse_table_array *v)
{
	v->a[76840] = 1;
	v->a[76841] = sym_file_descriptor;
	v->a[76842] = actions(3107);
	v->a[76843] = 1;
	v->a[76844] = anon_sym_LT_LT_DASH;
	v->a[76845] = actions(3114);
	v->a[76846] = 2;
	v->a[76847] = anon_sym_AMP_AMP;
	v->a[76848] = anon_sym_PIPE_PIPE;
	v->a[76849] = actions(3118);
	v->a[76850] = 2;
	v->a[76851] = anon_sym_LT_AMP_DASH;
	v->a[76852] = anon_sym_GT_AMP_DASH;
	v->a[76853] = actions(3116);
	v->a[76854] = 3;
	v->a[76855] = anon_sym_GT_GT;
	v->a[76856] = anon_sym_AMP_GT_GT;
	v->a[76857] = anon_sym_GT_PIPE;
	v->a[76858] = state(1302);
	v->a[76859] = 3;
	small_parse_table_3843(v);
}

void	small_parse_table_3843(t_small_parse_table_array *v)
{
	v->a[76860] = sym_file_redirect;
	v->a[76861] = sym_heredoc_redirect;
	v->a[76862] = aux_sym_redirected_statement_repeat1;
	v->a[76863] = actions(2755);
	v->a[76864] = 5;
	v->a[76865] = anon_sym_LT;
	v->a[76866] = anon_sym_GT;
	v->a[76867] = anon_sym_AMP_GT;
	v->a[76868] = anon_sym_LT_AMP;
	v->a[76869] = anon_sym_GT_AMP;
	v->a[76870] = 5;
	v->a[76871] = actions(3);
	v->a[76872] = 1;
	v->a[76873] = sym_comment;
	v->a[76874] = actions(3120);
	v->a[76875] = 1;
	v->a[76876] = anon_sym_PIPE;
	v->a[76877] = state(1382);
	v->a[76878] = 1;
	v->a[76879] = aux_sym_pipeline_repeat1;
	small_parse_table_3844(v);
}

void	small_parse_table_3844(t_small_parse_table_array *v)
{
	v->a[76880] = actions(2659);
	v->a[76881] = 2;
	v->a[76882] = sym_file_descriptor;
	v->a[76883] = aux_sym_heredoc_redirect_token1;
	v->a[76884] = actions(2655);
	v->a[76885] = 14;
	v->a[76886] = anon_sym_AMP_AMP;
	v->a[76887] = anon_sym_PIPE_PIPE;
	v->a[76888] = anon_sym_LT;
	v->a[76889] = anon_sym_GT;
	v->a[76890] = anon_sym_GT_GT;
	v->a[76891] = anon_sym_AMP_GT;
	v->a[76892] = anon_sym_AMP_GT_GT;
	v->a[76893] = anon_sym_LT_AMP;
	v->a[76894] = anon_sym_GT_AMP;
	v->a[76895] = anon_sym_GT_PIPE;
	v->a[76896] = anon_sym_LT_AMP_DASH;
	v->a[76897] = anon_sym_GT_AMP_DASH;
	v->a[76898] = anon_sym_LT_LT;
	v->a[76899] = anon_sym_LT_LT_DASH;
	small_parse_table_3845(v);
}

/* EOF small_parse_table_768.c */
