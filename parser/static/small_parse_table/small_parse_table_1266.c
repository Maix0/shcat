/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1266.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6330(t_small_parse_table_array *v)
{
	v->a[126600] = 1;
	v->a[126601] = sym_comment;
	v->a[126602] = actions(7092);
	v->a[126603] = 1;
	v->a[126604] = aux_sym_concatenation_token1;
	v->a[126605] = actions(7231);
	v->a[126606] = 1;
	v->a[126607] = sym__concat;
	v->a[126608] = state(2607);
	v->a[126609] = 1;
	v->a[126610] = aux_sym_concatenation_repeat1;
	v->a[126611] = actions(2696);
	v->a[126612] = 3;
	v->a[126613] = sym_test_operator;
	v->a[126614] = sym__brace_start;
	v->a[126615] = aux_sym_heredoc_redirect_token1;
	v->a[126616] = actions(2694);
	v->a[126617] = 12;
	v->a[126618] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[126619] = anon_sym_DOLLAR;
	small_parse_table_6331(v);
}

void	small_parse_table_6331(t_small_parse_table_array *v)
{
	v->a[126620] = sym__special_character;
	v->a[126621] = anon_sym_DQUOTE;
	v->a[126622] = sym_raw_string;
	v->a[126623] = aux_sym_number_token1;
	v->a[126624] = aux_sym_number_token2;
	v->a[126625] = anon_sym_DOLLAR_LBRACE;
	v->a[126626] = anon_sym_DOLLAR_LPAREN;
	v->a[126627] = anon_sym_BQUOTE;
	v->a[126628] = anon_sym_DOLLAR_BQUOTE;
	v->a[126629] = sym_word;
	v->a[126630] = 9;
	v->a[126631] = actions(57);
	v->a[126632] = 1;
	v->a[126633] = sym_comment;
	v->a[126634] = actions(7147);
	v->a[126635] = 1;
	v->a[126636] = anon_sym_LT_LT;
	v->a[126637] = actions(7149);
	v->a[126638] = 1;
	v->a[126639] = anon_sym_LT_LT_DASH;
	small_parse_table_6332(v);
}

void	small_parse_table_6332(t_small_parse_table_array *v)
{
	v->a[126640] = actions(7151);
	v->a[126641] = 1;
	v->a[126642] = sym_file_descriptor;
	v->a[126643] = actions(7145);
	v->a[126644] = 2;
	v->a[126645] = anon_sym_LT_AMP_DASH;
	v->a[126646] = anon_sym_GT_AMP_DASH;
	v->a[126647] = actions(7233);
	v->a[126648] = 2;
	v->a[126649] = anon_sym_AMP_AMP;
	v->a[126650] = anon_sym_PIPE_PIPE;
	v->a[126651] = actions(7143);
	v->a[126652] = 3;
	v->a[126653] = anon_sym_GT_GT;
	v->a[126654] = anon_sym_AMP_GT_GT;
	v->a[126655] = anon_sym_GT_PIPE;
	v->a[126656] = state(2632);
	v->a[126657] = 3;
	v->a[126658] = sym_file_redirect;
	v->a[126659] = sym_heredoc_redirect;
	small_parse_table_6333(v);
}

void	small_parse_table_6333(t_small_parse_table_array *v)
{
	v->a[126660] = aux_sym_redirected_statement_repeat1;
	v->a[126661] = actions(7141);
	v->a[126662] = 5;
	v->a[126663] = anon_sym_LT;
	v->a[126664] = anon_sym_GT;
	v->a[126665] = anon_sym_AMP_GT;
	v->a[126666] = anon_sym_LT_AMP;
	v->a[126667] = anon_sym_GT_AMP;
	v->a[126668] = 9;
	v->a[126669] = actions(57);
	v->a[126670] = 1;
	v->a[126671] = sym_comment;
	v->a[126672] = actions(2945);
	v->a[126673] = 1;
	v->a[126674] = anon_sym_LT_LT;
	v->a[126675] = actions(5604);
	v->a[126676] = 1;
	v->a[126677] = sym_file_descriptor;
	v->a[126678] = actions(7241);
	v->a[126679] = 1;
	small_parse_table_6334(v);
}

void	small_parse_table_6334(t_small_parse_table_array *v)
{
	v->a[126680] = anon_sym_LT_LT_DASH;
	v->a[126681] = actions(7235);
	v->a[126682] = 2;
	v->a[126683] = anon_sym_AMP_AMP;
	v->a[126684] = anon_sym_PIPE_PIPE;
	v->a[126685] = actions(7239);
	v->a[126686] = 2;
	v->a[126687] = anon_sym_LT_AMP_DASH;
	v->a[126688] = anon_sym_GT_AMP_DASH;
	v->a[126689] = actions(7237);
	v->a[126690] = 3;
	v->a[126691] = anon_sym_GT_GT;
	v->a[126692] = anon_sym_AMP_GT_GT;
	v->a[126693] = anon_sym_GT_PIPE;
	v->a[126694] = state(2129);
	v->a[126695] = 3;
	v->a[126696] = sym_file_redirect;
	v->a[126697] = sym_heredoc_redirect;
	v->a[126698] = aux_sym_redirected_statement_repeat1;
	v->a[126699] = actions(5600);
	small_parse_table_6335(v);
}

/* EOF small_parse_table_1266.c */
