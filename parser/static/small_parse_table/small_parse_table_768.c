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
	v->a[76800] = 1;
	v->a[76801] = sym_comment;
	v->a[76802] = actions(2843);
	v->a[76803] = 3;
	v->a[76804] = sym_file_descriptor;
	v->a[76805] = ts_builtin_sym_end;
	v->a[76806] = aux_sym_heredoc_redirect_token1;
	v->a[76807] = actions(2845);
	v->a[76808] = 20;
	v->a[76809] = anon_sym_PIPE;
	v->a[76810] = anon_sym_RPAREN;
	v->a[76811] = anon_sym_SEMI_SEMI;
	v->a[76812] = anon_sym_AMP_AMP;
	v->a[76813] = anon_sym_PIPE_PIPE;
	v->a[76814] = anon_sym_LT;
	v->a[76815] = anon_sym_GT;
	v->a[76816] = anon_sym_GT_GT;
	v->a[76817] = anon_sym_AMP_GT;
	v->a[76818] = anon_sym_AMP_GT_GT;
	v->a[76819] = anon_sym_LT_AMP;
	small_parse_table_3841(v);
}

void	small_parse_table_3841(t_small_parse_table_array *v)
{
	v->a[76820] = anon_sym_GT_AMP;
	v->a[76821] = anon_sym_GT_PIPE;
	v->a[76822] = anon_sym_LT_AMP_DASH;
	v->a[76823] = anon_sym_GT_AMP_DASH;
	v->a[76824] = anon_sym_LT_LT;
	v->a[76825] = anon_sym_LT_LT_DASH;
	v->a[76826] = anon_sym_AMP;
	v->a[76827] = anon_sym_BQUOTE;
	v->a[76828] = anon_sym_SEMI;
	v->a[76829] = 5;
	v->a[76830] = actions(3);
	v->a[76831] = 1;
	v->a[76832] = sym_comment;
	v->a[76833] = actions(2847);
	v->a[76834] = 1;
	v->a[76835] = sym_variable_name;
	v->a[76836] = actions(2124);
	v->a[76837] = 2;
	v->a[76838] = sym_file_descriptor;
	v->a[76839] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3842(v);
}

void	small_parse_table_3842(t_small_parse_table_array *v)
{
	v->a[76840] = state(1417);
	v->a[76841] = 2;
	v->a[76842] = sym_variable_assignment;
	v->a[76843] = aux_sym__variable_assignments_repeat1;
	v->a[76844] = actions(2122);
	v->a[76845] = 18;
	v->a[76846] = anon_sym_PIPE;
	v->a[76847] = anon_sym_SEMI_SEMI;
	v->a[76848] = anon_sym_AMP_AMP;
	v->a[76849] = anon_sym_PIPE_PIPE;
	v->a[76850] = anon_sym_LT;
	v->a[76851] = anon_sym_GT;
	v->a[76852] = anon_sym_GT_GT;
	v->a[76853] = anon_sym_AMP_GT;
	v->a[76854] = anon_sym_AMP_GT_GT;
	v->a[76855] = anon_sym_LT_AMP;
	v->a[76856] = anon_sym_GT_AMP;
	v->a[76857] = anon_sym_GT_PIPE;
	v->a[76858] = anon_sym_LT_AMP_DASH;
	v->a[76859] = anon_sym_GT_AMP_DASH;
	small_parse_table_3843(v);
}

void	small_parse_table_3843(t_small_parse_table_array *v)
{
	v->a[76860] = anon_sym_LT_LT;
	v->a[76861] = anon_sym_LT_LT_DASH;
	v->a[76862] = anon_sym_AMP;
	v->a[76863] = anon_sym_SEMI;
	v->a[76864] = 3;
	v->a[76865] = actions(3);
	v->a[76866] = 1;
	v->a[76867] = sym_comment;
	v->a[76868] = actions(2849);
	v->a[76869] = 3;
	v->a[76870] = sym_file_descriptor;
	v->a[76871] = ts_builtin_sym_end;
	v->a[76872] = aux_sym_heredoc_redirect_token1;
	v->a[76873] = actions(2851);
	v->a[76874] = 20;
	v->a[76875] = anon_sym_PIPE;
	v->a[76876] = anon_sym_RPAREN;
	v->a[76877] = anon_sym_SEMI_SEMI;
	v->a[76878] = anon_sym_AMP_AMP;
	v->a[76879] = anon_sym_PIPE_PIPE;
	small_parse_table_3844(v);
}

void	small_parse_table_3844(t_small_parse_table_array *v)
{
	v->a[76880] = anon_sym_LT;
	v->a[76881] = anon_sym_GT;
	v->a[76882] = anon_sym_GT_GT;
	v->a[76883] = anon_sym_AMP_GT;
	v->a[76884] = anon_sym_AMP_GT_GT;
	v->a[76885] = anon_sym_LT_AMP;
	v->a[76886] = anon_sym_GT_AMP;
	v->a[76887] = anon_sym_GT_PIPE;
	v->a[76888] = anon_sym_LT_AMP_DASH;
	v->a[76889] = anon_sym_GT_AMP_DASH;
	v->a[76890] = anon_sym_LT_LT;
	v->a[76891] = anon_sym_LT_LT_DASH;
	v->a[76892] = anon_sym_AMP;
	v->a[76893] = anon_sym_BQUOTE;
	v->a[76894] = anon_sym_SEMI;
	v->a[76895] = 5;
	v->a[76896] = actions(3);
	v->a[76897] = 1;
	v->a[76898] = sym_comment;
	v->a[76899] = actions(2853);
	small_parse_table_3845(v);
}

/* EOF small_parse_table_768.c */
