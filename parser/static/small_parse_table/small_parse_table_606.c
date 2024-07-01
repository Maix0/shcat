/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_606.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3030(t_small_parse_table_array *v)
{
	v->a[60600] = anon_sym_GT_AMP;
	v->a[60601] = anon_sym_GT_PIPE;
	v->a[60602] = anon_sym_LT_AMP_DASH;
	v->a[60603] = anon_sym_GT_AMP_DASH;
	v->a[60604] = anon_sym_LT_LT;
	v->a[60605] = anon_sym_LT_LT_DASH;
	v->a[60606] = anon_sym_AMP;
	v->a[60607] = aux_sym_concatenation_token1;
	v->a[60608] = anon_sym_BQUOTE;
	v->a[60609] = anon_sym_SEMI;
	v->a[60610] = 12;
	v->a[60611] = actions(3);
	v->a[60612] = 1;
	v->a[60613] = sym_comment;
	v->a[60614] = actions(682);
	v->a[60615] = 1;
	v->a[60616] = anon_sym_PIPE;
	v->a[60617] = actions(695);
	v->a[60618] = 1;
	v->a[60619] = anon_sym_BQUOTE;
	small_parse_table_3031(v);
}

void	small_parse_table_3031(t_small_parse_table_array *v)
{
	v->a[60620] = actions(2009);
	v->a[60621] = 1;
	v->a[60622] = aux_sym_heredoc_redirect_token1;
	v->a[60623] = actions(2041);
	v->a[60624] = 1;
	v->a[60625] = sym_file_descriptor;
	v->a[60626] = state(813);
	v->a[60627] = 1;
	v->a[60628] = sym_terminator;
	v->a[60629] = actions(754);
	v->a[60630] = 2;
	v->a[60631] = anon_sym_LT_LT;
	v->a[60632] = anon_sym_LT_LT_DASH;
	v->a[60633] = actions(963);
	v->a[60634] = 2;
	v->a[60635] = anon_sym_AMP_AMP;
	v->a[60636] = anon_sym_PIPE_PIPE;
	v->a[60637] = actions(2039);
	v->a[60638] = 2;
	v->a[60639] = anon_sym_LT_AMP_DASH;
	small_parse_table_3032(v);
}

void	small_parse_table_3032(t_small_parse_table_array *v)
{
	v->a[60640] = anon_sym_GT_AMP_DASH;
	v->a[60641] = actions(750);
	v->a[60642] = 3;
	v->a[60643] = anon_sym_SEMI_SEMI;
	v->a[60644] = anon_sym_AMP;
	v->a[60645] = anon_sym_SEMI;
	v->a[60646] = state(1165);
	v->a[60647] = 3;
	v->a[60648] = sym_file_redirect;
	v->a[60649] = sym_heredoc_redirect;
	v->a[60650] = aux_sym_redirected_statement_repeat1;
	v->a[60651] = actions(2037);
	v->a[60652] = 6;
	v->a[60653] = anon_sym_LT;
	v->a[60654] = anon_sym_GT;
	v->a[60655] = anon_sym_GT_GT;
	v->a[60656] = anon_sym_LT_AMP;
	v->a[60657] = anon_sym_GT_AMP;
	v->a[60658] = anon_sym_GT_PIPE;
	v->a[60659] = 12;
	small_parse_table_3033(v);
}

void	small_parse_table_3033(t_small_parse_table_array *v)
{
	v->a[60660] = actions(3);
	v->a[60661] = 1;
	v->a[60662] = sym_comment;
	v->a[60663] = actions(682);
	v->a[60664] = 1;
	v->a[60665] = anon_sym_PIPE;
	v->a[60666] = actions(695);
	v->a[60667] = 1;
	v->a[60668] = anon_sym_BQUOTE;
	v->a[60669] = actions(2009);
	v->a[60670] = 1;
	v->a[60671] = aux_sym_heredoc_redirect_token1;
	v->a[60672] = actions(2041);
	v->a[60673] = 1;
	v->a[60674] = sym_file_descriptor;
	v->a[60675] = state(814);
	v->a[60676] = 1;
	v->a[60677] = sym_terminator;
	v->a[60678] = actions(754);
	v->a[60679] = 2;
	small_parse_table_3034(v);
}

void	small_parse_table_3034(t_small_parse_table_array *v)
{
	v->a[60680] = anon_sym_LT_LT;
	v->a[60681] = anon_sym_LT_LT_DASH;
	v->a[60682] = actions(963);
	v->a[60683] = 2;
	v->a[60684] = anon_sym_AMP_AMP;
	v->a[60685] = anon_sym_PIPE_PIPE;
	v->a[60686] = actions(2039);
	v->a[60687] = 2;
	v->a[60688] = anon_sym_LT_AMP_DASH;
	v->a[60689] = anon_sym_GT_AMP_DASH;
	v->a[60690] = actions(750);
	v->a[60691] = 3;
	v->a[60692] = anon_sym_SEMI_SEMI;
	v->a[60693] = anon_sym_AMP;
	v->a[60694] = anon_sym_SEMI;
	v->a[60695] = state(1165);
	v->a[60696] = 3;
	v->a[60697] = sym_file_redirect;
	v->a[60698] = sym_heredoc_redirect;
	v->a[60699] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3035(v);
}

/* EOF small_parse_table_606.c */
