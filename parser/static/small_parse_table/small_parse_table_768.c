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
	v->a[76800] = anon_sym_GT_AMP_DASH;
	v->a[76801] = anon_sym_LT_LT_DASH;
	v->a[76802] = 10;
	v->a[76803] = actions(1074);
	v->a[76804] = 1;
	v->a[76805] = sym_comment;
	v->a[76806] = actions(2119);
	v->a[76807] = 1;
	v->a[76808] = anon_sym_PIPE;
	v->a[76809] = actions(2609);
	v->a[76810] = 1;
	v->a[76811] = anon_sym_LT_LT;
	v->a[76812] = actions(2611);
	v->a[76813] = 1;
	v->a[76814] = anon_sym_LT_LT_DASH;
	v->a[76815] = actions(2613);
	v->a[76816] = 1;
	v->a[76817] = sym_file_descriptor;
	v->a[76818] = actions(2121);
	v->a[76819] = 2;
	small_parse_table_3841(v);
}

void	small_parse_table_3841(t_small_parse_table_array *v)
{
	v->a[76820] = anon_sym_AMP_AMP;
	v->a[76821] = anon_sym_PIPE_PIPE;
	v->a[76822] = actions(2607);
	v->a[76823] = 2;
	v->a[76824] = anon_sym_LT_AMP_DASH;
	v->a[76825] = anon_sym_GT_AMP_DASH;
	v->a[76826] = actions(2605);
	v->a[76827] = 3;
	v->a[76828] = anon_sym_GT_GT;
	v->a[76829] = anon_sym_AMP_GT_GT;
	v->a[76830] = anon_sym_GT_PIPE;
	v->a[76831] = state(1429);
	v->a[76832] = 3;
	v->a[76833] = sym_file_redirect;
	v->a[76834] = sym_heredoc_redirect;
	v->a[76835] = aux_sym_redirected_statement_repeat1;
	v->a[76836] = actions(2603);
	v->a[76837] = 5;
	v->a[76838] = anon_sym_LT;
	v->a[76839] = anon_sym_GT;
	small_parse_table_3842(v);
}

void	small_parse_table_3842(t_small_parse_table_array *v)
{
	v->a[76840] = anon_sym_AMP_GT;
	v->a[76841] = anon_sym_LT_AMP;
	v->a[76842] = anon_sym_GT_AMP;
	v->a[76843] = 4;
	v->a[76844] = actions(1074);
	v->a[76845] = 1;
	v->a[76846] = sym_comment;
	v->a[76847] = state(1433);
	v->a[76848] = 3;
	v->a[76849] = sym_file_redirect;
	v->a[76850] = sym_heredoc_redirect;
	v->a[76851] = aux_sym_redirected_statement_repeat1;
	v->a[76852] = actions(900);
	v->a[76853] = 7;
	v->a[76854] = anon_sym_PIPE;
	v->a[76855] = anon_sym_LT;
	v->a[76856] = anon_sym_GT;
	v->a[76857] = anon_sym_AMP_GT;
	v->a[76858] = anon_sym_LT_AMP;
	v->a[76859] = anon_sym_GT_AMP;
	small_parse_table_3843(v);
}

void	small_parse_table_3843(t_small_parse_table_array *v)
{
	v->a[76860] = anon_sym_LT_LT;
	v->a[76861] = actions(927);
	v->a[76862] = 9;
	v->a[76863] = sym_file_descriptor;
	v->a[76864] = anon_sym_AMP_AMP;
	v->a[76865] = anon_sym_PIPE_PIPE;
	v->a[76866] = anon_sym_GT_GT;
	v->a[76867] = anon_sym_AMP_GT_GT;
	v->a[76868] = anon_sym_GT_PIPE;
	v->a[76869] = anon_sym_LT_AMP_DASH;
	v->a[76870] = anon_sym_GT_AMP_DASH;
	v->a[76871] = anon_sym_LT_LT_DASH;
	v->a[76872] = 5;
	v->a[76873] = actions(766);
	v->a[76874] = 1;
	v->a[76875] = anon_sym_PIPE;
	v->a[76876] = actions(1074);
	v->a[76877] = 1;
	v->a[76878] = sym_comment;
	v->a[76879] = state(1433);
	small_parse_table_3844(v);
}

void	small_parse_table_3844(t_small_parse_table_array *v)
{
	v->a[76880] = 3;
	v->a[76881] = sym_file_redirect;
	v->a[76882] = sym_heredoc_redirect;
	v->a[76883] = aux_sym_redirected_statement_repeat1;
	v->a[76884] = actions(900);
	v->a[76885] = 6;
	v->a[76886] = anon_sym_LT;
	v->a[76887] = anon_sym_GT;
	v->a[76888] = anon_sym_AMP_GT;
	v->a[76889] = anon_sym_LT_AMP;
	v->a[76890] = anon_sym_GT_AMP;
	v->a[76891] = anon_sym_LT_LT;
	v->a[76892] = actions(927);
	v->a[76893] = 9;
	v->a[76894] = sym_file_descriptor;
	v->a[76895] = anon_sym_AMP_AMP;
	v->a[76896] = anon_sym_PIPE_PIPE;
	v->a[76897] = anon_sym_GT_GT;
	v->a[76898] = anon_sym_AMP_GT_GT;
	v->a[76899] = anon_sym_GT_PIPE;
	small_parse_table_3845(v);
}

/* EOF small_parse_table_768.c */
