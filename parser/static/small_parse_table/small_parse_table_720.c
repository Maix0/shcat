/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_720.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3600(t_small_parse_table_array *v)
{
	v->a[72000] = 1;
	v->a[72001] = sym_comment;
	v->a[72002] = actions(1187);
	v->a[72003] = 4;
	v->a[72004] = sym_file_descriptor;
	v->a[72005] = sym__concat;
	v->a[72006] = sym_variable_name;
	v->a[72007] = aux_sym_heredoc_redirect_token1;
	v->a[72008] = actions(1185);
	v->a[72009] = 20;
	v->a[72010] = anon_sym_esac;
	v->a[72011] = anon_sym_PIPE;
	v->a[72012] = anon_sym_SEMI_SEMI;
	v->a[72013] = anon_sym_AMP_AMP;
	v->a[72014] = anon_sym_PIPE_PIPE;
	v->a[72015] = anon_sym_LT;
	v->a[72016] = anon_sym_GT;
	v->a[72017] = anon_sym_GT_GT;
	v->a[72018] = anon_sym_AMP_GT;
	v->a[72019] = anon_sym_AMP_GT_GT;
	small_parse_table_3601(v);
}

void	small_parse_table_3601(t_small_parse_table_array *v)
{
	v->a[72020] = anon_sym_LT_AMP;
	v->a[72021] = anon_sym_GT_AMP;
	v->a[72022] = anon_sym_GT_PIPE;
	v->a[72023] = anon_sym_LT_AMP_DASH;
	v->a[72024] = anon_sym_GT_AMP_DASH;
	v->a[72025] = anon_sym_LT_LT;
	v->a[72026] = anon_sym_LT_LT_DASH;
	v->a[72027] = anon_sym_AMP;
	v->a[72028] = aux_sym_concatenation_token1;
	v->a[72029] = anon_sym_SEMI;
	v->a[72030] = 3;
	v->a[72031] = actions(3);
	v->a[72032] = 1;
	v->a[72033] = sym_comment;
	v->a[72034] = actions(1163);
	v->a[72035] = 4;
	v->a[72036] = sym_file_descriptor;
	v->a[72037] = sym__concat;
	v->a[72038] = sym_variable_name;
	v->a[72039] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3602(v);
}

void	small_parse_table_3602(t_small_parse_table_array *v)
{
	v->a[72040] = actions(1161);
	v->a[72041] = 20;
	v->a[72042] = anon_sym_esac;
	v->a[72043] = anon_sym_PIPE;
	v->a[72044] = anon_sym_SEMI_SEMI;
	v->a[72045] = anon_sym_AMP_AMP;
	v->a[72046] = anon_sym_PIPE_PIPE;
	v->a[72047] = anon_sym_LT;
	v->a[72048] = anon_sym_GT;
	v->a[72049] = anon_sym_GT_GT;
	v->a[72050] = anon_sym_AMP_GT;
	v->a[72051] = anon_sym_AMP_GT_GT;
	v->a[72052] = anon_sym_LT_AMP;
	v->a[72053] = anon_sym_GT_AMP;
	v->a[72054] = anon_sym_GT_PIPE;
	v->a[72055] = anon_sym_LT_AMP_DASH;
	v->a[72056] = anon_sym_GT_AMP_DASH;
	v->a[72057] = anon_sym_LT_LT;
	v->a[72058] = anon_sym_LT_LT_DASH;
	v->a[72059] = anon_sym_AMP;
	small_parse_table_3603(v);
}

void	small_parse_table_3603(t_small_parse_table_array *v)
{
	v->a[72060] = aux_sym_concatenation_token1;
	v->a[72061] = anon_sym_SEMI;
	v->a[72062] = 8;
	v->a[72063] = actions(3);
	v->a[72064] = 1;
	v->a[72065] = sym_comment;
	v->a[72066] = actions(2083);
	v->a[72067] = 1;
	v->a[72068] = sym_file_descriptor;
	v->a[72069] = actions(2182);
	v->a[72070] = 1;
	v->a[72071] = aux_sym_heredoc_redirect_token1;
	v->a[72072] = actions(861);
	v->a[72073] = 2;
	v->a[72074] = anon_sym_LT_LT;
	v->a[72075] = anon_sym_LT_LT_DASH;
	v->a[72076] = actions(2079);
	v->a[72077] = 2;
	v->a[72078] = anon_sym_LT_AMP_DASH;
	v->a[72079] = anon_sym_GT_AMP_DASH;
	small_parse_table_3604(v);
}

void	small_parse_table_3604(t_small_parse_table_array *v)
{
	v->a[72080] = state(1299);
	v->a[72081] = 3;
	v->a[72082] = sym_file_redirect;
	v->a[72083] = sym_heredoc_redirect;
	v->a[72084] = aux_sym_redirected_statement_repeat1;
	v->a[72085] = actions(2176);
	v->a[72086] = 7;
	v->a[72087] = anon_sym_PIPE;
	v->a[72088] = anon_sym_RPAREN;
	v->a[72089] = anon_sym_SEMI_SEMI;
	v->a[72090] = anon_sym_AMP_AMP;
	v->a[72091] = anon_sym_PIPE_PIPE;
	v->a[72092] = anon_sym_AMP;
	v->a[72093] = anon_sym_SEMI;
	v->a[72094] = actions(2077);
	v->a[72095] = 8;
	v->a[72096] = anon_sym_LT;
	v->a[72097] = anon_sym_GT;
	v->a[72098] = anon_sym_GT_GT;
	v->a[72099] = anon_sym_AMP_GT;
	small_parse_table_3605(v);
}

/* EOF small_parse_table_720.c */
