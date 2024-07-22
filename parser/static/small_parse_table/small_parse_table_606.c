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
	v->a[60600] = sym_file_descriptor;
	v->a[60601] = aux_sym_heredoc_redirect_token1;
	v->a[60602] = state(1116);
	v->a[60603] = 2;
	v->a[60604] = sym_variable_assignment;
	v->a[60605] = aux_sym__variable_assignments_repeat1;
	v->a[60606] = actions(1979);
	v->a[60607] = 15;
	v->a[60608] = anon_sym_PIPE;
	v->a[60609] = anon_sym_SEMI_SEMI;
	v->a[60610] = anon_sym_AMP_AMP;
	v->a[60611] = anon_sym_PIPE_PIPE;
	v->a[60612] = anon_sym_LT;
	v->a[60613] = anon_sym_GT;
	v->a[60614] = anon_sym_GT_GT;
	v->a[60615] = anon_sym_LT_AMP;
	v->a[60616] = anon_sym_GT_AMP;
	v->a[60617] = anon_sym_GT_PIPE;
	v->a[60618] = anon_sym_LT_GT;
	v->a[60619] = anon_sym_LT_LT;
	small_parse_table_3031(v);
}

void	small_parse_table_3031(t_small_parse_table_array *v)
{
	v->a[60620] = anon_sym_LT_LT_DASH;
	v->a[60621] = anon_sym_BQUOTE;
	v->a[60622] = anon_sym_SEMI;
	v->a[60623] = 5;
	v->a[60624] = actions(3);
	v->a[60625] = 1;
	v->a[60626] = sym_comment;
	v->a[60627] = actions(2056);
	v->a[60628] = 1;
	v->a[60629] = sym_variable_name;
	v->a[60630] = actions(1955);
	v->a[60631] = 2;
	v->a[60632] = sym_file_descriptor;
	v->a[60633] = aux_sym_heredoc_redirect_token1;
	v->a[60634] = state(1116);
	v->a[60635] = 2;
	v->a[60636] = sym_variable_assignment;
	v->a[60637] = aux_sym__variable_assignments_repeat1;
	v->a[60638] = actions(1953);
	v->a[60639] = 15;
	small_parse_table_3032(v);
}

void	small_parse_table_3032(t_small_parse_table_array *v)
{
	v->a[60640] = anon_sym_PIPE;
	v->a[60641] = anon_sym_SEMI_SEMI;
	v->a[60642] = anon_sym_AMP_AMP;
	v->a[60643] = anon_sym_PIPE_PIPE;
	v->a[60644] = anon_sym_LT;
	v->a[60645] = anon_sym_GT;
	v->a[60646] = anon_sym_GT_GT;
	v->a[60647] = anon_sym_LT_AMP;
	v->a[60648] = anon_sym_GT_AMP;
	v->a[60649] = anon_sym_GT_PIPE;
	v->a[60650] = anon_sym_LT_GT;
	v->a[60651] = anon_sym_LT_LT;
	v->a[60652] = anon_sym_LT_LT_DASH;
	v->a[60653] = anon_sym_BQUOTE;
	v->a[60654] = anon_sym_SEMI;
	v->a[60655] = 5;
	v->a[60656] = actions(3);
	v->a[60657] = 1;
	v->a[60658] = sym_comment;
	v->a[60659] = actions(792);
	small_parse_table_3033(v);
}

void	small_parse_table_3033(t_small_parse_table_array *v)
{
	v->a[60660] = 1;
	v->a[60661] = sym_file_descriptor;
	v->a[60662] = actions(1061);
	v->a[60663] = 1;
	v->a[60664] = sym_variable_name;
	v->a[60665] = state(1115);
	v->a[60666] = 2;
	v->a[60667] = sym_variable_assignment;
	v->a[60668] = aux_sym__variable_assignments_repeat1;
	v->a[60669] = actions(780);
	v->a[60670] = 16;
	v->a[60671] = anon_sym_LT;
	v->a[60672] = anon_sym_GT;
	v->a[60673] = anon_sym_GT_GT;
	v->a[60674] = anon_sym_LT_AMP;
	v->a[60675] = anon_sym_GT_AMP;
	v->a[60676] = anon_sym_GT_PIPE;
	v->a[60677] = anon_sym_LT_GT;
	v->a[60678] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60679] = anon_sym_DOLLAR;
	small_parse_table_3034(v);
}

void	small_parse_table_3034(t_small_parse_table_array *v)
{
	v->a[60680] = anon_sym_DQUOTE;
	v->a[60681] = sym_raw_string;
	v->a[60682] = sym_number;
	v->a[60683] = anon_sym_DOLLAR_LBRACE;
	v->a[60684] = anon_sym_DOLLAR_LPAREN;
	v->a[60685] = anon_sym_BQUOTE;
	v->a[60686] = sym_word;
	v->a[60687] = 11;
	v->a[60688] = actions(3);
	v->a[60689] = 1;
	v->a[60690] = sym_comment;
	v->a[60691] = actions(782);
	v->a[60692] = 1;
	v->a[60693] = anon_sym_PIPE;
	v->a[60694] = actions(784);
	v->a[60695] = 1;
	v->a[60696] = anon_sym_SEMI_SEMI;
	v->a[60697] = actions(786);
	v->a[60698] = 1;
	v->a[60699] = anon_sym_SEMI;
	small_parse_table_3035(v);
}

/* EOF small_parse_table_606.c */
