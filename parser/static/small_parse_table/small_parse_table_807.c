/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_807.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4035(t_small_parse_table_array *v)
{
	v->a[80700] = 2;
	v->a[80701] = anon_sym_AMP_AMP;
	v->a[80702] = anon_sym_PIPE_PIPE;
	v->a[80703] = actions(890);
	v->a[80704] = 2;
	v->a[80705] = anon_sym_LT_AMP_DASH;
	v->a[80706] = anon_sym_GT_AMP_DASH;
	v->a[80707] = state(1670);
	v->a[80708] = 2;
	v->a[80709] = sym_file_redirect;
	v->a[80710] = aux_sym_redirected_statement_repeat2;
	v->a[80711] = actions(888);
	v->a[80712] = 6;
	v->a[80713] = anon_sym_LT;
	v->a[80714] = anon_sym_GT;
	v->a[80715] = anon_sym_GT_GT;
	v->a[80716] = anon_sym_LT_AMP;
	v->a[80717] = anon_sym_GT_AMP;
	v->a[80718] = anon_sym_GT_PIPE;
	v->a[80719] = 6;
	small_parse_table_4036(v);
}

void	small_parse_table_4036(t_small_parse_table_array *v)
{
	v->a[80720] = actions(3);
	v->a[80721] = 1;
	v->a[80722] = sym_comment;
	v->a[80723] = actions(3134);
	v->a[80724] = 1;
	v->a[80725] = aux_sym_concatenation_token1;
	v->a[80726] = actions(3137);
	v->a[80727] = 1;
	v->a[80728] = sym__concat;
	v->a[80729] = state(1608);
	v->a[80730] = 1;
	v->a[80731] = aux_sym_concatenation_repeat1;
	v->a[80732] = actions(1194);
	v->a[80733] = 2;
	v->a[80734] = sym_file_descriptor;
	v->a[80735] = aux_sym_heredoc_redirect_token1;
	v->a[80736] = actions(1189);
	v->a[80737] = 10;
	v->a[80738] = anon_sym_AMP_AMP;
	v->a[80739] = anon_sym_PIPE_PIPE;
	small_parse_table_4037(v);
}

void	small_parse_table_4037(t_small_parse_table_array *v)
{
	v->a[80740] = anon_sym_LT;
	v->a[80741] = anon_sym_GT;
	v->a[80742] = anon_sym_GT_GT;
	v->a[80743] = anon_sym_LT_AMP;
	v->a[80744] = anon_sym_GT_AMP;
	v->a[80745] = anon_sym_GT_PIPE;
	v->a[80746] = anon_sym_LT_AMP_DASH;
	v->a[80747] = anon_sym_GT_AMP_DASH;
	v->a[80748] = 5;
	v->a[80749] = actions(870);
	v->a[80750] = 1;
	v->a[80751] = sym_comment;
	v->a[80752] = actions(2092);
	v->a[80753] = 1;
	v->a[80754] = anon_sym_PIPE;
	v->a[80755] = state(1606);
	v->a[80756] = 1;
	v->a[80757] = aux_sym_pipeline_repeat1;
	v->a[80758] = actions(2095);
	v->a[80759] = 5;
	small_parse_table_4038(v);
}

void	small_parse_table_4038(t_small_parse_table_array *v)
{
	v->a[80760] = anon_sym_LT;
	v->a[80761] = anon_sym_GT;
	v->a[80762] = anon_sym_LT_AMP;
	v->a[80763] = anon_sym_GT_AMP;
	v->a[80764] = anon_sym_LT_LT;
	v->a[80765] = actions(2090);
	v->a[80766] = 8;
	v->a[80767] = sym_file_descriptor;
	v->a[80768] = anon_sym_AMP_AMP;
	v->a[80769] = anon_sym_PIPE_PIPE;
	v->a[80770] = anon_sym_GT_GT;
	v->a[80771] = anon_sym_GT_PIPE;
	v->a[80772] = anon_sym_LT_AMP_DASH;
	v->a[80773] = anon_sym_GT_AMP_DASH;
	v->a[80774] = anon_sym_LT_LT_DASH;
	v->a[80775] = 8;
	v->a[80776] = actions(3);
	v->a[80777] = 1;
	v->a[80778] = sym_comment;
	v->a[80779] = actions(906);
	small_parse_table_4039(v);
}

void	small_parse_table_4039(t_small_parse_table_array *v)
{
	v->a[80780] = 1;
	v->a[80781] = sym_file_descriptor;
	v->a[80782] = actions(3140);
	v->a[80783] = 1;
	v->a[80784] = aux_sym_heredoc_redirect_token1;
	v->a[80785] = state(2247);
	v->a[80786] = 1;
	v->a[80787] = sym__heredoc_expression;
	v->a[80788] = actions(886);
	v->a[80789] = 2;
	v->a[80790] = anon_sym_AMP_AMP;
	v->a[80791] = anon_sym_PIPE_PIPE;
	v->a[80792] = actions(890);
	v->a[80793] = 2;
	v->a[80794] = anon_sym_LT_AMP_DASH;
	v->a[80795] = anon_sym_GT_AMP_DASH;
	v->a[80796] = state(1670);
	v->a[80797] = 2;
	v->a[80798] = sym_file_redirect;
	v->a[80799] = aux_sym_redirected_statement_repeat2;
	small_parse_table_4040(v);
}

/* EOF small_parse_table_807.c */
