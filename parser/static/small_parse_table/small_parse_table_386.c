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
	v->a[38600] = anon_sym_PIPE;
	v->a[38601] = anon_sym_SEMI_SEMI;
	v->a[38602] = anon_sym_AMP_AMP;
	v->a[38603] = anon_sym_PIPE_PIPE;
	v->a[38604] = anon_sym_LT;
	v->a[38605] = anon_sym_GT;
	v->a[38606] = anon_sym_GT_GT;
	v->a[38607] = anon_sym_LT_AMP;
	v->a[38608] = anon_sym_GT_AMP;
	v->a[38609] = anon_sym_GT_PIPE;
	v->a[38610] = anon_sym_LT_GT;
	v->a[38611] = anon_sym_LT_LT;
	v->a[38612] = anon_sym_LT_LT_DASH;
	v->a[38613] = aux_sym_heredoc_redirect_token1;
	v->a[38614] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38615] = anon_sym_AMP;
	v->a[38616] = aux_sym_concatenation_token1;
	v->a[38617] = anon_sym_DOLLAR;
	v->a[38618] = anon_sym_DQUOTE;
	v->a[38619] = sym_raw_string;
	small_parse_table_1931(v);
}

void	small_parse_table_1931(t_small_parse_table_array *v)
{
	v->a[38620] = sym_number;
	v->a[38621] = anon_sym_DOLLAR_LBRACE;
	v->a[38622] = anon_sym_DOLLAR_LPAREN;
	v->a[38623] = anon_sym_BQUOTE;
	v->a[38624] = sym_word;
	v->a[38625] = anon_sym_SEMI;
	v->a[38626] = 3;
	v->a[38627] = actions(3);
	v->a[38628] = 1;
	v->a[38629] = sym_comment;
	v->a[38630] = actions(662);
	v->a[38631] = 3;
	v->a[38632] = sym_file_descriptor;
	v->a[38633] = sym__concat;
	v->a[38634] = ts_builtin_sym_end;
	v->a[38635] = actions(660);
	v->a[38636] = 26;
	v->a[38637] = anon_sym_PIPE;
	v->a[38638] = anon_sym_SEMI_SEMI;
	v->a[38639] = anon_sym_AMP_AMP;
	small_parse_table_1932(v);
}

void	small_parse_table_1932(t_small_parse_table_array *v)
{
	v->a[38640] = anon_sym_PIPE_PIPE;
	v->a[38641] = anon_sym_LT;
	v->a[38642] = anon_sym_GT;
	v->a[38643] = anon_sym_GT_GT;
	v->a[38644] = anon_sym_LT_AMP;
	v->a[38645] = anon_sym_GT_AMP;
	v->a[38646] = anon_sym_GT_PIPE;
	v->a[38647] = anon_sym_LT_GT;
	v->a[38648] = anon_sym_LT_LT;
	v->a[38649] = anon_sym_LT_LT_DASH;
	v->a[38650] = aux_sym_heredoc_redirect_token1;
	v->a[38651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38652] = anon_sym_AMP;
	v->a[38653] = aux_sym_concatenation_token1;
	v->a[38654] = anon_sym_DOLLAR;
	v->a[38655] = anon_sym_DQUOTE;
	v->a[38656] = sym_raw_string;
	v->a[38657] = sym_number;
	v->a[38658] = anon_sym_DOLLAR_LBRACE;
	v->a[38659] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1933(v);
}

void	small_parse_table_1933(t_small_parse_table_array *v)
{
	v->a[38660] = anon_sym_BQUOTE;
	v->a[38661] = sym_word;
	v->a[38662] = anon_sym_SEMI;
	v->a[38663] = 3;
	v->a[38664] = actions(3);
	v->a[38665] = 1;
	v->a[38666] = sym_comment;
	v->a[38667] = actions(846);
	v->a[38668] = 2;
	v->a[38669] = sym_file_descriptor;
	v->a[38670] = sym__concat;
	v->a[38671] = actions(844);
	v->a[38672] = 27;
	v->a[38673] = anon_sym_PIPE;
	v->a[38674] = anon_sym_RPAREN;
	v->a[38675] = anon_sym_SEMI_SEMI;
	v->a[38676] = anon_sym_AMP_AMP;
	v->a[38677] = anon_sym_PIPE_PIPE;
	v->a[38678] = anon_sym_LT;
	v->a[38679] = anon_sym_GT;
	small_parse_table_1934(v);
}

void	small_parse_table_1934(t_small_parse_table_array *v)
{
	v->a[38680] = anon_sym_GT_GT;
	v->a[38681] = anon_sym_LT_AMP;
	v->a[38682] = anon_sym_GT_AMP;
	v->a[38683] = anon_sym_GT_PIPE;
	v->a[38684] = anon_sym_LT_GT;
	v->a[38685] = anon_sym_LT_LT;
	v->a[38686] = anon_sym_LT_LT_DASH;
	v->a[38687] = aux_sym_heredoc_redirect_token1;
	v->a[38688] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38689] = anon_sym_AMP;
	v->a[38690] = aux_sym_concatenation_token1;
	v->a[38691] = anon_sym_DOLLAR;
	v->a[38692] = anon_sym_DQUOTE;
	v->a[38693] = sym_raw_string;
	v->a[38694] = sym_number;
	v->a[38695] = anon_sym_DOLLAR_LBRACE;
	v->a[38696] = anon_sym_DOLLAR_LPAREN;
	v->a[38697] = anon_sym_BQUOTE;
	v->a[38698] = sym_word;
	v->a[38699] = anon_sym_SEMI;
	small_parse_table_1935(v);
}

/* EOF small_parse_table_386.c */
