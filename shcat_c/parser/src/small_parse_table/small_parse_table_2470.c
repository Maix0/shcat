/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2470.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12350(t_small_parse_table_array *v)
{
	v->a[247000] = anon_sym_LT_LT_DASH;
	v->a[247001] = anon_sym_LT_LT_LT;
	v->a[247002] = aux_sym_concatenation_token1;
	v->a[247003] = 13;
	v->a[247004] = actions(3);
	v->a[247005] = 1;
	v->a[247006] = sym_comment;
	v->a[247007] = actions(4257);
	v->a[247008] = 1;
	v->a[247009] = anon_sym_RPAREN;
	v->a[247010] = actions(4411);
	v->a[247011] = 1;
	v->a[247012] = aux_sym_heredoc_redirect_token1;
	v->a[247013] = actions(11508);
	v->a[247014] = 1;
	v->a[247015] = anon_sym_LT_LT_LT;
	v->a[247016] = actions(11544);
	v->a[247017] = 1;
	v->a[247018] = sym_file_descriptor;
	v->a[247019] = state(4912);
	small_parse_table_12351(v);
}

void	small_parse_table_12351(t_small_parse_table_array *v)
{
	v->a[247020] = 1;
	v->a[247021] = sym_herestring_redirect;
	v->a[247022] = actions(4253);
	v->a[247023] = 2;
	v->a[247024] = anon_sym_PIPE;
	v->a[247025] = anon_sym_PIPE_AMP;
	v->a[247026] = actions(4692);
	v->a[247027] = 2;
	v->a[247028] = anon_sym_LT_LT;
	v->a[247029] = anon_sym_LT_LT_DASH;
	v->a[247030] = actions(4809);
	v->a[247031] = 2;
	v->a[247032] = anon_sym_PIPE_PIPE;
	v->a[247033] = anon_sym_AMP_AMP;
	v->a[247034] = actions(11542);
	v->a[247035] = 2;
	v->a[247036] = anon_sym_LT_AMP_DASH;
	v->a[247037] = anon_sym_GT_AMP_DASH;
	v->a[247038] = actions(4409);
	v->a[247039] = 3;
	small_parse_table_12352(v);
}

void	small_parse_table_12352(t_small_parse_table_array *v)
{
	v->a[247040] = anon_sym_SEMI;
	v->a[247041] = anon_sym_AMP;
	v->a[247042] = anon_sym_SEMI_SEMI;
	v->a[247043] = state(4746);
	v->a[247044] = 3;
	v->a[247045] = sym_file_redirect;
	v->a[247046] = sym_heredoc_redirect;
	v->a[247047] = aux_sym_redirected_statement_repeat1;
	v->a[247048] = actions(11540);
	v->a[247049] = 8;
	v->a[247050] = anon_sym_LT;
	v->a[247051] = anon_sym_GT;
	v->a[247052] = anon_sym_GT_GT;
	v->a[247053] = anon_sym_AMP_GT;
	v->a[247054] = anon_sym_AMP_GT_GT;
	v->a[247055] = anon_sym_LT_AMP;
	v->a[247056] = anon_sym_GT_AMP;
	v->a[247057] = anon_sym_GT_PIPE;
	v->a[247058] = 6;
	v->a[247059] = actions(3);
	small_parse_table_12353(v);
}

void	small_parse_table_12353(t_small_parse_table_array *v)
{
	v->a[247060] = 1;
	v->a[247061] = sym_comment;
	v->a[247062] = actions(11512);
	v->a[247063] = 1;
	v->a[247064] = aux_sym_concatenation_token1;
	v->a[247065] = actions(11514);
	v->a[247066] = 1;
	v->a[247067] = sym__concat;
	v->a[247068] = state(4523);
	v->a[247069] = 1;
	v->a[247070] = aux_sym_concatenation_repeat1;
	v->a[247071] = actions(1263);
	v->a[247072] = 3;
	v->a[247073] = sym_file_descriptor;
	v->a[247074] = ts_builtin_sym_end;
	v->a[247075] = aux_sym_heredoc_redirect_token1;
	v->a[247076] = actions(1261);
	v->a[247077] = 21;
	v->a[247078] = anon_sym_SEMI;
	v->a[247079] = anon_sym_PIPE_PIPE;
	small_parse_table_12354(v);
}

void	small_parse_table_12354(t_small_parse_table_array *v)
{
	v->a[247080] = anon_sym_AMP_AMP;
	v->a[247081] = anon_sym_PIPE;
	v->a[247082] = anon_sym_AMP;
	v->a[247083] = anon_sym_LT;
	v->a[247084] = anon_sym_GT;
	v->a[247085] = anon_sym_LT_LT;
	v->a[247086] = anon_sym_GT_GT;
	v->a[247087] = anon_sym_SEMI_SEMI;
	v->a[247088] = anon_sym_PIPE_AMP;
	v->a[247089] = anon_sym_AMP_GT;
	v->a[247090] = anon_sym_AMP_GT_GT;
	v->a[247091] = anon_sym_LT_AMP;
	v->a[247092] = anon_sym_GT_AMP;
	v->a[247093] = anon_sym_GT_PIPE;
	v->a[247094] = anon_sym_LT_AMP_DASH;
	v->a[247095] = anon_sym_GT_AMP_DASH;
	v->a[247096] = anon_sym_LT_LT_DASH;
	v->a[247097] = anon_sym_LT_LT_LT;
	v->a[247098] = sym__special_character;
	v->a[247099] = 3;
	small_parse_table_12355(v);
}

/* EOF small_parse_table_2470.c */
