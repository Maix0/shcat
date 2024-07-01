/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_386.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1930(t_small_parse_table_array *v)
{
	v->a[38600] = 3;
	v->a[38601] = actions(3);
	v->a[38602] = 1;
	v->a[38603] = sym_comment;
	v->a[38604] = actions(1033);
	v->a[38605] = 4;
	v->a[38606] = sym_file_descriptor;
	v->a[38607] = sym__concat;
	v->a[38608] = sym_variable_name;
	v->a[38609] = ts_builtin_sym_end;
	v->a[38610] = actions(1031);
	v->a[38611] = 27;
	v->a[38612] = anon_sym_PIPE;
	v->a[38613] = anon_sym_SEMI_SEMI;
	v->a[38614] = anon_sym_AMP_AMP;
	v->a[38615] = anon_sym_PIPE_PIPE;
	v->a[38616] = anon_sym_LT;
	v->a[38617] = anon_sym_GT;
	v->a[38618] = anon_sym_GT_GT;
	v->a[38619] = anon_sym_LT_AMP;
	small_parse_table_1931(v);
}

void	small_parse_table_1931(t_small_parse_table_array *v)
{
	v->a[38620] = anon_sym_GT_AMP;
	v->a[38621] = anon_sym_GT_PIPE;
	v->a[38622] = anon_sym_LT_AMP_DASH;
	v->a[38623] = anon_sym_GT_AMP_DASH;
	v->a[38624] = anon_sym_LT_LT;
	v->a[38625] = anon_sym_LT_LT_DASH;
	v->a[38626] = aux_sym_heredoc_redirect_token1;
	v->a[38627] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38628] = anon_sym_AMP;
	v->a[38629] = aux_sym_concatenation_token1;
	v->a[38630] = anon_sym_DOLLAR;
	v->a[38631] = anon_sym_DQUOTE;
	v->a[38632] = sym_raw_string;
	v->a[38633] = sym_number;
	v->a[38634] = anon_sym_DOLLAR_LBRACE;
	v->a[38635] = anon_sym_DOLLAR_LPAREN;
	v->a[38636] = anon_sym_BQUOTE;
	v->a[38637] = sym_word;
	v->a[38638] = anon_sym_SEMI;
	v->a[38639] = 3;
	small_parse_table_1932(v);
}

void	small_parse_table_1932(t_small_parse_table_array *v)
{
	v->a[38640] = actions(3);
	v->a[38641] = 1;
	v->a[38642] = sym_comment;
	v->a[38643] = actions(1015);
	v->a[38644] = 3;
	v->a[38645] = sym_file_descriptor;
	v->a[38646] = sym__concat;
	v->a[38647] = sym_variable_name;
	v->a[38648] = actions(1013);
	v->a[38649] = 28;
	v->a[38650] = anon_sym_PIPE;
	v->a[38651] = anon_sym_RPAREN;
	v->a[38652] = anon_sym_SEMI_SEMI;
	v->a[38653] = anon_sym_AMP_AMP;
	v->a[38654] = anon_sym_PIPE_PIPE;
	v->a[38655] = anon_sym_LT;
	v->a[38656] = anon_sym_GT;
	v->a[38657] = anon_sym_GT_GT;
	v->a[38658] = anon_sym_LT_AMP;
	v->a[38659] = anon_sym_GT_AMP;
	small_parse_table_1933(v);
}

void	small_parse_table_1933(t_small_parse_table_array *v)
{
	v->a[38660] = anon_sym_GT_PIPE;
	v->a[38661] = anon_sym_LT_AMP_DASH;
	v->a[38662] = anon_sym_GT_AMP_DASH;
	v->a[38663] = anon_sym_LT_LT;
	v->a[38664] = anon_sym_LT_LT_DASH;
	v->a[38665] = aux_sym_heredoc_redirect_token1;
	v->a[38666] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38667] = anon_sym_AMP;
	v->a[38668] = aux_sym_concatenation_token1;
	v->a[38669] = anon_sym_DOLLAR;
	v->a[38670] = anon_sym_DQUOTE;
	v->a[38671] = sym_raw_string;
	v->a[38672] = sym_number;
	v->a[38673] = anon_sym_DOLLAR_LBRACE;
	v->a[38674] = anon_sym_DOLLAR_LPAREN;
	v->a[38675] = anon_sym_BQUOTE;
	v->a[38676] = sym_word;
	v->a[38677] = anon_sym_SEMI;
	v->a[38678] = 3;
	v->a[38679] = actions(3);
	small_parse_table_1934(v);
}

void	small_parse_table_1934(t_small_parse_table_array *v)
{
	v->a[38680] = 1;
	v->a[38681] = sym_comment;
	v->a[38682] = actions(970);
	v->a[38683] = 4;
	v->a[38684] = sym_file_descriptor;
	v->a[38685] = sym__concat;
	v->a[38686] = sym__bare_dollar;
	v->a[38687] = ts_builtin_sym_end;
	v->a[38688] = actions(968);
	v->a[38689] = 27;
	v->a[38690] = anon_sym_PIPE;
	v->a[38691] = anon_sym_SEMI_SEMI;
	v->a[38692] = anon_sym_AMP_AMP;
	v->a[38693] = anon_sym_PIPE_PIPE;
	v->a[38694] = anon_sym_LT;
	v->a[38695] = anon_sym_GT;
	v->a[38696] = anon_sym_GT_GT;
	v->a[38697] = anon_sym_LT_AMP;
	v->a[38698] = anon_sym_GT_AMP;
	v->a[38699] = anon_sym_GT_PIPE;
	small_parse_table_1935(v);
}

/* EOF small_parse_table_386.c */
