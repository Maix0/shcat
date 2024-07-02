/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_380.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1900(t_small_parse_table_array *v)
{
	v->a[38000] = anon_sym_AMP_AMP;
	v->a[38001] = anon_sym_PIPE_PIPE;
	v->a[38002] = anon_sym_LT;
	v->a[38003] = anon_sym_GT;
	v->a[38004] = anon_sym_GT_GT;
	v->a[38005] = anon_sym_LT_AMP;
	v->a[38006] = anon_sym_GT_AMP;
	v->a[38007] = anon_sym_GT_PIPE;
	v->a[38008] = anon_sym_LT_GT;
	v->a[38009] = anon_sym_LT_LT;
	v->a[38010] = anon_sym_LT_LT_DASH;
	v->a[38011] = 3;
	v->a[38012] = actions(3);
	v->a[38013] = 1;
	v->a[38014] = sym_comment;
	v->a[38015] = actions(1200);
	v->a[38016] = 3;
	v->a[38017] = sym_file_descriptor;
	v->a[38018] = sym__concat;
	v->a[38019] = sym__bare_dollar;
	small_parse_table_1901(v);
}

void	small_parse_table_1901(t_small_parse_table_array *v)
{
	v->a[38020] = actions(1198);
	v->a[38021] = 27;
	v->a[38022] = anon_sym_PIPE;
	v->a[38023] = anon_sym_RPAREN;
	v->a[38024] = anon_sym_SEMI_SEMI;
	v->a[38025] = anon_sym_AMP_AMP;
	v->a[38026] = anon_sym_PIPE_PIPE;
	v->a[38027] = anon_sym_LT;
	v->a[38028] = anon_sym_GT;
	v->a[38029] = anon_sym_GT_GT;
	v->a[38030] = anon_sym_LT_AMP;
	v->a[38031] = anon_sym_GT_AMP;
	v->a[38032] = anon_sym_GT_PIPE;
	v->a[38033] = anon_sym_LT_GT;
	v->a[38034] = anon_sym_LT_LT;
	v->a[38035] = anon_sym_LT_LT_DASH;
	v->a[38036] = aux_sym_heredoc_redirect_token1;
	v->a[38037] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38038] = anon_sym_AMP;
	v->a[38039] = aux_sym_concatenation_token1;
	small_parse_table_1902(v);
}

void	small_parse_table_1902(t_small_parse_table_array *v)
{
	v->a[38040] = anon_sym_DOLLAR;
	v->a[38041] = anon_sym_DQUOTE;
	v->a[38042] = sym_raw_string;
	v->a[38043] = sym_number;
	v->a[38044] = anon_sym_DOLLAR_LBRACE;
	v->a[38045] = anon_sym_DOLLAR_LPAREN;
	v->a[38046] = anon_sym_BQUOTE;
	v->a[38047] = sym_word;
	v->a[38048] = anon_sym_SEMI;
	v->a[38049] = 3;
	v->a[38050] = actions(3);
	v->a[38051] = 1;
	v->a[38052] = sym_comment;
	v->a[38053] = actions(784);
	v->a[38054] = 3;
	v->a[38055] = sym_file_descriptor;
	v->a[38056] = sym__concat;
	v->a[38057] = sym__bare_dollar;
	v->a[38058] = actions(782);
	v->a[38059] = 27;
	small_parse_table_1903(v);
}

void	small_parse_table_1903(t_small_parse_table_array *v)
{
	v->a[38060] = anon_sym_PIPE;
	v->a[38061] = anon_sym_RPAREN;
	v->a[38062] = anon_sym_SEMI_SEMI;
	v->a[38063] = anon_sym_AMP_AMP;
	v->a[38064] = anon_sym_PIPE_PIPE;
	v->a[38065] = anon_sym_LT;
	v->a[38066] = anon_sym_GT;
	v->a[38067] = anon_sym_GT_GT;
	v->a[38068] = anon_sym_LT_AMP;
	v->a[38069] = anon_sym_GT_AMP;
	v->a[38070] = anon_sym_GT_PIPE;
	v->a[38071] = anon_sym_LT_GT;
	v->a[38072] = anon_sym_LT_LT;
	v->a[38073] = anon_sym_LT_LT_DASH;
	v->a[38074] = aux_sym_heredoc_redirect_token1;
	v->a[38075] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38076] = anon_sym_AMP;
	v->a[38077] = aux_sym_concatenation_token1;
	v->a[38078] = anon_sym_DOLLAR;
	v->a[38079] = anon_sym_DQUOTE;
	small_parse_table_1904(v);
}

void	small_parse_table_1904(t_small_parse_table_array *v)
{
	v->a[38080] = sym_raw_string;
	v->a[38081] = sym_number;
	v->a[38082] = anon_sym_DOLLAR_LBRACE;
	v->a[38083] = anon_sym_DOLLAR_LPAREN;
	v->a[38084] = anon_sym_BQUOTE;
	v->a[38085] = sym_word;
	v->a[38086] = anon_sym_SEMI;
	v->a[38087] = 3;
	v->a[38088] = actions(3);
	v->a[38089] = 1;
	v->a[38090] = sym_comment;
	v->a[38091] = actions(757);
	v->a[38092] = 3;
	v->a[38093] = sym_file_descriptor;
	v->a[38094] = sym__concat;
	v->a[38095] = sym__bare_dollar;
	v->a[38096] = actions(755);
	v->a[38097] = 27;
	v->a[38098] = anon_sym_PIPE;
	v->a[38099] = anon_sym_RPAREN;
	small_parse_table_1905(v);
}

/* EOF small_parse_table_380.c */
