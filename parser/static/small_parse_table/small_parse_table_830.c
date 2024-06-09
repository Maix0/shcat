/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_830.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4150(t_small_parse_table_array *v)
{
	v->a[83000] = sym_comment;
	v->a[83001] = actions(2486);
	v->a[83002] = 7;
	v->a[83003] = anon_sym_PIPE;
	v->a[83004] = anon_sym_LT;
	v->a[83005] = anon_sym_GT;
	v->a[83006] = anon_sym_AMP_GT;
	v->a[83007] = anon_sym_LT_AMP;
	v->a[83008] = anon_sym_GT_AMP;
	v->a[83009] = anon_sym_LT_LT;
	v->a[83010] = actions(2484);
	v->a[83011] = 9;
	v->a[83012] = sym_file_descriptor;
	v->a[83013] = anon_sym_AMP_AMP;
	v->a[83014] = anon_sym_PIPE_PIPE;
	v->a[83015] = anon_sym_GT_GT;
	v->a[83016] = anon_sym_AMP_GT_GT;
	v->a[83017] = anon_sym_GT_PIPE;
	v->a[83018] = anon_sym_LT_AMP_DASH;
	v->a[83019] = anon_sym_GT_AMP_DASH;
	small_parse_table_4151(v);
}

void	small_parse_table_4151(t_small_parse_table_array *v)
{
	v->a[83020] = anon_sym_LT_LT_DASH;
	v->a[83021] = 3;
	v->a[83022] = actions(3);
	v->a[83023] = 1;
	v->a[83024] = sym_comment;
	v->a[83025] = actions(1192);
	v->a[83026] = 3;
	v->a[83027] = sym_file_descriptor;
	v->a[83028] = sym__concat;
	v->a[83029] = aux_sym_heredoc_redirect_token1;
	v->a[83030] = actions(1190);
	v->a[83031] = 13;
	v->a[83032] = anon_sym_AMP_AMP;
	v->a[83033] = anon_sym_PIPE_PIPE;
	v->a[83034] = anon_sym_LT;
	v->a[83035] = anon_sym_GT;
	v->a[83036] = anon_sym_GT_GT;
	v->a[83037] = anon_sym_AMP_GT;
	v->a[83038] = anon_sym_AMP_GT_GT;
	v->a[83039] = anon_sym_LT_AMP;
	small_parse_table_4152(v);
}

void	small_parse_table_4152(t_small_parse_table_array *v)
{
	v->a[83040] = anon_sym_GT_AMP;
	v->a[83041] = anon_sym_GT_PIPE;
	v->a[83042] = anon_sym_LT_AMP_DASH;
	v->a[83043] = anon_sym_GT_AMP_DASH;
	v->a[83044] = aux_sym_concatenation_token1;
	v->a[83045] = 3;
	v->a[83046] = actions(3);
	v->a[83047] = 1;
	v->a[83048] = sym_comment;
	v->a[83049] = actions(1112);
	v->a[83050] = 1;
	v->a[83051] = sym__concat;
	v->a[83052] = actions(1114);
	v->a[83053] = 15;
	v->a[83054] = anon_sym_SEMI_SEMI;
	v->a[83055] = aux_sym_heredoc_redirect_token1;
	v->a[83056] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83057] = anon_sym_AMP;
	v->a[83058] = aux_sym_concatenation_token1;
	v->a[83059] = anon_sym_DOLLAR;
	small_parse_table_4153(v);
}

void	small_parse_table_4153(t_small_parse_table_array *v)
{
	v->a[83060] = anon_sym_DQUOTE;
	v->a[83061] = sym_raw_string;
	v->a[83062] = aux_sym_number_token1;
	v->a[83063] = aux_sym_number_token2;
	v->a[83064] = anon_sym_DOLLAR_LBRACE;
	v->a[83065] = anon_sym_DOLLAR_LPAREN;
	v->a[83066] = anon_sym_BQUOTE;
	v->a[83067] = sym_word;
	v->a[83068] = anon_sym_SEMI;
	v->a[83069] = 3;
	v->a[83070] = actions(1404);
	v->a[83071] = 1;
	v->a[83072] = sym_comment;
	v->a[83073] = actions(2464);
	v->a[83074] = 7;
	v->a[83075] = anon_sym_PIPE;
	v->a[83076] = anon_sym_LT;
	v->a[83077] = anon_sym_GT;
	v->a[83078] = anon_sym_AMP_GT;
	v->a[83079] = anon_sym_LT_AMP;
	small_parse_table_4154(v);
}

void	small_parse_table_4154(t_small_parse_table_array *v)
{
	v->a[83080] = anon_sym_GT_AMP;
	v->a[83081] = anon_sym_LT_LT;
	v->a[83082] = actions(2462);
	v->a[83083] = 9;
	v->a[83084] = sym_file_descriptor;
	v->a[83085] = anon_sym_AMP_AMP;
	v->a[83086] = anon_sym_PIPE_PIPE;
	v->a[83087] = anon_sym_GT_GT;
	v->a[83088] = anon_sym_AMP_GT_GT;
	v->a[83089] = anon_sym_GT_PIPE;
	v->a[83090] = anon_sym_LT_AMP_DASH;
	v->a[83091] = anon_sym_GT_AMP_DASH;
	v->a[83092] = anon_sym_LT_LT_DASH;
	v->a[83093] = 3;
	v->a[83094] = actions(1404);
	v->a[83095] = 1;
	v->a[83096] = sym_comment;
	v->a[83097] = actions(567);
	v->a[83098] = 7;
	v->a[83099] = anon_sym_PIPE;
	small_parse_table_4155(v);
}

/* EOF small_parse_table_830.c */
