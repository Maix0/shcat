/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_300.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1500(t_small_parse_table_array *v)
{
	v->a[30000] = sym_variable_name;
	v->a[30001] = actions(921);
	v->a[30002] = 1;
	v->a[30003] = sym_file_descriptor;
	v->a[30004] = state(1181);
	v->a[30005] = 2;
	v->a[30006] = sym_variable_assignment;
	v->a[30007] = aux_sym__variable_assignments_repeat1;
	v->a[30008] = state(1134);
	v->a[30009] = 3;
	v->a[30010] = sym_file_redirect;
	v->a[30011] = sym_heredoc_redirect;
	v->a[30012] = aux_sym_redirected_statement_repeat1;
	v->a[30013] = actions(690);
	v->a[30014] = 9;
	v->a[30015] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30016] = anon_sym_DOLLAR;
	v->a[30017] = anon_sym_DQUOTE;
	v->a[30018] = sym_raw_string;
	v->a[30019] = sym_number;
	small_parse_table_1501(v);
}

void	small_parse_table_1501(t_small_parse_table_array *v)
{
	v->a[30020] = anon_sym_DOLLAR_LBRACE;
	v->a[30021] = anon_sym_DOLLAR_LPAREN;
	v->a[30022] = anon_sym_BQUOTE;
	v->a[30023] = sym_word;
	v->a[30024] = actions(692);
	v->a[30025] = 16;
	v->a[30026] = anon_sym_PIPE;
	v->a[30027] = anon_sym_SEMI_SEMI;
	v->a[30028] = anon_sym_AMP_AMP;
	v->a[30029] = anon_sym_PIPE_PIPE;
	v->a[30030] = anon_sym_LT;
	v->a[30031] = anon_sym_GT;
	v->a[30032] = anon_sym_GT_GT;
	v->a[30033] = anon_sym_LT_AMP;
	v->a[30034] = anon_sym_GT_AMP;
	v->a[30035] = anon_sym_GT_PIPE;
	v->a[30036] = anon_sym_LT_GT;
	v->a[30037] = anon_sym_LT_LT;
	v->a[30038] = anon_sym_LT_LT_DASH;
	v->a[30039] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1502(v);
}

void	small_parse_table_1502(t_small_parse_table_array *v)
{
	v->a[30040] = anon_sym_AMP;
	v->a[30041] = anon_sym_SEMI;
	v->a[30042] = 3;
	v->a[30043] = actions(3);
	v->a[30044] = 1;
	v->a[30045] = sym_comment;
	v->a[30046] = actions(839);
	v->a[30047] = 3;
	v->a[30048] = sym_file_descriptor;
	v->a[30049] = sym__concat;
	v->a[30050] = sym__bare_dollar;
	v->a[30051] = actions(837);
	v->a[30052] = 28;
	v->a[30053] = anon_sym_esac;
	v->a[30054] = anon_sym_LPAREN;
	v->a[30055] = anon_sym_PIPE;
	v->a[30056] = anon_sym_SEMI_SEMI;
	v->a[30057] = anon_sym_AMP_AMP;
	v->a[30058] = anon_sym_PIPE_PIPE;
	v->a[30059] = anon_sym_LT;
	small_parse_table_1503(v);
}

void	small_parse_table_1503(t_small_parse_table_array *v)
{
	v->a[30060] = anon_sym_GT;
	v->a[30061] = anon_sym_GT_GT;
	v->a[30062] = anon_sym_LT_AMP;
	v->a[30063] = anon_sym_GT_AMP;
	v->a[30064] = anon_sym_GT_PIPE;
	v->a[30065] = anon_sym_LT_GT;
	v->a[30066] = anon_sym_LT_LT;
	v->a[30067] = anon_sym_LT_LT_DASH;
	v->a[30068] = aux_sym_heredoc_redirect_token1;
	v->a[30069] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30070] = anon_sym_AMP;
	v->a[30071] = aux_sym_concatenation_token1;
	v->a[30072] = anon_sym_DOLLAR;
	v->a[30073] = anon_sym_DQUOTE;
	v->a[30074] = sym_raw_string;
	v->a[30075] = sym_number;
	v->a[30076] = anon_sym_DOLLAR_LBRACE;
	v->a[30077] = anon_sym_DOLLAR_LPAREN;
	v->a[30078] = anon_sym_BQUOTE;
	v->a[30079] = sym_word;
	small_parse_table_1504(v);
}

void	small_parse_table_1504(t_small_parse_table_array *v)
{
	v->a[30080] = anon_sym_SEMI;
	v->a[30081] = 3;
	v->a[30082] = actions(3);
	v->a[30083] = 1;
	v->a[30084] = sym_comment;
	v->a[30085] = actions(713);
	v->a[30086] = 3;
	v->a[30087] = sym_file_descriptor;
	v->a[30088] = sym__concat;
	v->a[30089] = sym__bare_dollar;
	v->a[30090] = actions(711);
	v->a[30091] = 28;
	v->a[30092] = anon_sym_esac;
	v->a[30093] = anon_sym_LPAREN;
	v->a[30094] = anon_sym_PIPE;
	v->a[30095] = anon_sym_SEMI_SEMI;
	v->a[30096] = anon_sym_AMP_AMP;
	v->a[30097] = anon_sym_PIPE_PIPE;
	v->a[30098] = anon_sym_LT;
	v->a[30099] = anon_sym_GT;
	small_parse_table_1505(v);
}

/* EOF small_parse_table_300.c */
