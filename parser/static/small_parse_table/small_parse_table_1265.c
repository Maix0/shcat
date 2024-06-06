/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1265.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6325(t_small_parse_table_array *v)
{
	v->a[126500] = anon_sym_AMP_GT_GT;
	v->a[126501] = anon_sym_GT_PIPE;
	v->a[126502] = anon_sym_LT_AMP_DASH;
	v->a[126503] = anon_sym_GT_AMP_DASH;
	v->a[126504] = anon_sym_LT_LT_DASH;
	v->a[126505] = aux_sym_concatenation_token1;
	v->a[126506] = 3;
	v->a[126507] = actions(57);
	v->a[126508] = 1;
	v->a[126509] = sym_comment;
	v->a[126510] = actions(3048);
	v->a[126511] = 7;
	v->a[126512] = anon_sym_PIPE;
	v->a[126513] = anon_sym_LT;
	v->a[126514] = anon_sym_GT;
	v->a[126515] = anon_sym_AMP_GT;
	v->a[126516] = anon_sym_LT_AMP;
	v->a[126517] = anon_sym_GT_AMP;
	v->a[126518] = anon_sym_LT_LT;
	v->a[126519] = actions(3050);
	small_parse_table_6326(v);
}

void	small_parse_table_6326(t_small_parse_table_array *v)
{
	v->a[126520] = 12;
	v->a[126521] = sym_file_descriptor;
	v->a[126522] = sym__concat;
	v->a[126523] = anon_sym_PIPE_AMP;
	v->a[126524] = anon_sym_AMP_AMP;
	v->a[126525] = anon_sym_PIPE_PIPE;
	v->a[126526] = anon_sym_GT_GT;
	v->a[126527] = anon_sym_AMP_GT_GT;
	v->a[126528] = anon_sym_GT_PIPE;
	v->a[126529] = anon_sym_LT_AMP_DASH;
	v->a[126530] = anon_sym_GT_AMP_DASH;
	v->a[126531] = anon_sym_LT_LT_DASH;
	v->a[126532] = aux_sym_concatenation_token1;
	v->a[126533] = 3;
	v->a[126534] = actions(57);
	v->a[126535] = 1;
	v->a[126536] = sym_comment;
	v->a[126537] = actions(2772);
	v->a[126538] = 7;
	v->a[126539] = anon_sym_PIPE;
	small_parse_table_6327(v);
}

void	small_parse_table_6327(t_small_parse_table_array *v)
{
	v->a[126540] = anon_sym_LT;
	v->a[126541] = anon_sym_GT;
	v->a[126542] = anon_sym_AMP_GT;
	v->a[126543] = anon_sym_LT_AMP;
	v->a[126544] = anon_sym_GT_AMP;
	v->a[126545] = anon_sym_LT_LT;
	v->a[126546] = actions(2774);
	v->a[126547] = 12;
	v->a[126548] = sym_file_descriptor;
	v->a[126549] = sym__concat;
	v->a[126550] = anon_sym_PIPE_AMP;
	v->a[126551] = anon_sym_AMP_AMP;
	v->a[126552] = anon_sym_PIPE_PIPE;
	v->a[126553] = anon_sym_GT_GT;
	v->a[126554] = anon_sym_AMP_GT_GT;
	v->a[126555] = anon_sym_GT_PIPE;
	v->a[126556] = anon_sym_LT_AMP_DASH;
	v->a[126557] = anon_sym_GT_AMP_DASH;
	v->a[126558] = anon_sym_LT_LT_DASH;
	v->a[126559] = aux_sym_concatenation_token1;
	small_parse_table_6328(v);
}

void	small_parse_table_6328(t_small_parse_table_array *v)
{
	v->a[126560] = 9;
	v->a[126561] = actions(57);
	v->a[126562] = 1;
	v->a[126563] = sym_comment;
	v->a[126564] = actions(2520);
	v->a[126565] = 1;
	v->a[126566] = anon_sym_LT_LT;
	v->a[126567] = actions(5159);
	v->a[126568] = 1;
	v->a[126569] = sym_file_descriptor;
	v->a[126570] = actions(7229);
	v->a[126571] = 1;
	v->a[126572] = anon_sym_LT_LT_DASH;
	v->a[126573] = actions(7223);
	v->a[126574] = 2;
	v->a[126575] = anon_sym_AMP_AMP;
	v->a[126576] = anon_sym_PIPE_PIPE;
	v->a[126577] = actions(7227);
	v->a[126578] = 2;
	v->a[126579] = anon_sym_LT_AMP_DASH;
	small_parse_table_6329(v);
}

void	small_parse_table_6329(t_small_parse_table_array *v)
{
	v->a[126580] = anon_sym_GT_AMP_DASH;
	v->a[126581] = actions(7225);
	v->a[126582] = 3;
	v->a[126583] = anon_sym_GT_GT;
	v->a[126584] = anon_sym_AMP_GT_GT;
	v->a[126585] = anon_sym_GT_PIPE;
	v->a[126586] = state(1894);
	v->a[126587] = 3;
	v->a[126588] = sym_file_redirect;
	v->a[126589] = sym_heredoc_redirect;
	v->a[126590] = aux_sym_redirected_statement_repeat1;
	v->a[126591] = actions(5153);
	v->a[126592] = 5;
	v->a[126593] = anon_sym_LT;
	v->a[126594] = anon_sym_GT;
	v->a[126595] = anon_sym_AMP_GT;
	v->a[126596] = anon_sym_LT_AMP;
	v->a[126597] = anon_sym_GT_AMP;
	v->a[126598] = 6;
	v->a[126599] = actions(3);
	small_parse_table_6330(v);
}

/* EOF small_parse_table_1265.c */
