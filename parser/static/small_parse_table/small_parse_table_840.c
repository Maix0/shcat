/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_840.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4200(t_small_parse_table_array *v)
{
	v->a[84000] = anon_sym_AMP_GT_GT;
	v->a[84001] = anon_sym_GT_PIPE;
	v->a[84002] = anon_sym_LT_AMP_DASH;
	v->a[84003] = anon_sym_GT_AMP_DASH;
	v->a[84004] = anon_sym_LT_LT_DASH;
	v->a[84005] = 3;
	v->a[84006] = actions(3);
	v->a[84007] = 1;
	v->a[84008] = sym_comment;
	v->a[84009] = actions(1301);
	v->a[84010] = 1;
	v->a[84011] = sym__concat;
	v->a[84012] = actions(1299);
	v->a[84013] = 15;
	v->a[84014] = anon_sym_SEMI_SEMI;
	v->a[84015] = aux_sym_heredoc_redirect_token1;
	v->a[84016] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84017] = anon_sym_AMP;
	v->a[84018] = aux_sym_concatenation_token1;
	v->a[84019] = anon_sym_DOLLAR;
	small_parse_table_4201(v);
}

void	small_parse_table_4201(t_small_parse_table_array *v)
{
	v->a[84020] = anon_sym_DQUOTE;
	v->a[84021] = sym_raw_string;
	v->a[84022] = aux_sym_number_token1;
	v->a[84023] = aux_sym_number_token2;
	v->a[84024] = anon_sym_DOLLAR_LBRACE;
	v->a[84025] = anon_sym_DOLLAR_LPAREN;
	v->a[84026] = anon_sym_BQUOTE;
	v->a[84027] = sym_word;
	v->a[84028] = anon_sym_SEMI;
	v->a[84029] = 3;
	v->a[84030] = actions(3);
	v->a[84031] = 1;
	v->a[84032] = sym_comment;
	v->a[84033] = actions(1255);
	v->a[84034] = 1;
	v->a[84035] = sym__concat;
	v->a[84036] = actions(1257);
	v->a[84037] = 15;
	v->a[84038] = anon_sym_SEMI_SEMI;
	v->a[84039] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4202(v);
}

void	small_parse_table_4202(t_small_parse_table_array *v)
{
	v->a[84040] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84041] = anon_sym_AMP;
	v->a[84042] = aux_sym_concatenation_token1;
	v->a[84043] = anon_sym_DOLLAR;
	v->a[84044] = anon_sym_DQUOTE;
	v->a[84045] = sym_raw_string;
	v->a[84046] = aux_sym_number_token1;
	v->a[84047] = aux_sym_number_token2;
	v->a[84048] = anon_sym_DOLLAR_LBRACE;
	v->a[84049] = anon_sym_DOLLAR_LPAREN;
	v->a[84050] = anon_sym_BQUOTE;
	v->a[84051] = sym_word;
	v->a[84052] = anon_sym_SEMI;
	v->a[84053] = 3;
	v->a[84054] = actions(1404);
	v->a[84055] = 1;
	v->a[84056] = sym_comment;
	v->a[84057] = actions(2574);
	v->a[84058] = 7;
	v->a[84059] = anon_sym_PIPE;
	small_parse_table_4203(v);
}

void	small_parse_table_4203(t_small_parse_table_array *v)
{
	v->a[84060] = anon_sym_LT;
	v->a[84061] = anon_sym_GT;
	v->a[84062] = anon_sym_AMP_GT;
	v->a[84063] = anon_sym_LT_AMP;
	v->a[84064] = anon_sym_GT_AMP;
	v->a[84065] = anon_sym_LT_LT;
	v->a[84066] = actions(2572);
	v->a[84067] = 9;
	v->a[84068] = sym_file_descriptor;
	v->a[84069] = anon_sym_AMP_AMP;
	v->a[84070] = anon_sym_PIPE_PIPE;
	v->a[84071] = anon_sym_GT_GT;
	v->a[84072] = anon_sym_AMP_GT_GT;
	v->a[84073] = anon_sym_GT_PIPE;
	v->a[84074] = anon_sym_LT_AMP_DASH;
	v->a[84075] = anon_sym_GT_AMP_DASH;
	v->a[84076] = anon_sym_LT_LT_DASH;
	v->a[84077] = 3;
	v->a[84078] = actions(1404);
	v->a[84079] = 1;
	small_parse_table_4204(v);
}

void	small_parse_table_4204(t_small_parse_table_array *v)
{
	v->a[84080] = sym_comment;
	v->a[84081] = actions(2574);
	v->a[84082] = 7;
	v->a[84083] = anon_sym_PIPE;
	v->a[84084] = anon_sym_LT;
	v->a[84085] = anon_sym_GT;
	v->a[84086] = anon_sym_AMP_GT;
	v->a[84087] = anon_sym_LT_AMP;
	v->a[84088] = anon_sym_GT_AMP;
	v->a[84089] = anon_sym_LT_LT;
	v->a[84090] = actions(2572);
	v->a[84091] = 9;
	v->a[84092] = sym_file_descriptor;
	v->a[84093] = anon_sym_AMP_AMP;
	v->a[84094] = anon_sym_PIPE_PIPE;
	v->a[84095] = anon_sym_GT_GT;
	v->a[84096] = anon_sym_AMP_GT_GT;
	v->a[84097] = anon_sym_GT_PIPE;
	v->a[84098] = anon_sym_LT_AMP_DASH;
	v->a[84099] = anon_sym_GT_AMP_DASH;
	small_parse_table_4205(v);
}

/* EOF small_parse_table_840.c */
