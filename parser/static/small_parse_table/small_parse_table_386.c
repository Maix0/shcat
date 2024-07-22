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
	v->a[38600] = anon_sym_GT_GT;
	v->a[38601] = anon_sym_LT_AMP;
	v->a[38602] = anon_sym_GT_AMP;
	v->a[38603] = anon_sym_GT_PIPE;
	v->a[38604] = anon_sym_LT_GT;
	v->a[38605] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38606] = anon_sym_DOLLAR;
	v->a[38607] = anon_sym_DQUOTE;
	v->a[38608] = sym_raw_string;
	v->a[38609] = sym_number;
	v->a[38610] = anon_sym_DOLLAR_LBRACE;
	v->a[38611] = anon_sym_DOLLAR_LPAREN;
	v->a[38612] = anon_sym_BQUOTE;
	v->a[38613] = sym_word;
	v->a[38614] = 4;
	v->a[38615] = actions(3);
	v->a[38616] = 1;
	v->a[38617] = sym_comment;
	v->a[38618] = actions(1410);
	v->a[38619] = 2;
	small_parse_table_1931(v);
}

void	small_parse_table_1931(t_small_parse_table_array *v)
{
	v->a[38620] = anon_sym_RPAREN;
	v->a[38621] = anon_sym_SEMI_SEMI;
	v->a[38622] = actions(1412);
	v->a[38623] = 2;
	v->a[38624] = sym_file_descriptor;
	v->a[38625] = sym_variable_name;
	v->a[38626] = actions(1408);
	v->a[38627] = 24;
	v->a[38628] = anon_sym_for;
	v->a[38629] = anon_sym_while;
	v->a[38630] = anon_sym_until;
	v->a[38631] = anon_sym_if;
	v->a[38632] = anon_sym_case;
	v->a[38633] = anon_sym_LPAREN;
	v->a[38634] = anon_sym_LBRACE;
	v->a[38635] = anon_sym_BANG;
	v->a[38636] = anon_sym_LT;
	v->a[38637] = anon_sym_GT;
	v->a[38638] = anon_sym_GT_GT;
	v->a[38639] = anon_sym_LT_AMP;
	small_parse_table_1932(v);
}

void	small_parse_table_1932(t_small_parse_table_array *v)
{
	v->a[38640] = anon_sym_GT_AMP;
	v->a[38641] = anon_sym_GT_PIPE;
	v->a[38642] = anon_sym_LT_GT;
	v->a[38643] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38644] = anon_sym_DOLLAR;
	v->a[38645] = anon_sym_DQUOTE;
	v->a[38646] = sym_raw_string;
	v->a[38647] = sym_number;
	v->a[38648] = anon_sym_DOLLAR_LBRACE;
	v->a[38649] = anon_sym_DOLLAR_LPAREN;
	v->a[38650] = anon_sym_BQUOTE;
	v->a[38651] = sym_word;
	v->a[38652] = 6;
	v->a[38653] = actions(3);
	v->a[38654] = 1;
	v->a[38655] = sym_comment;
	v->a[38656] = actions(367);
	v->a[38657] = 1;
	v->a[38658] = sym_file_descriptor;
	v->a[38659] = actions(1418);
	small_parse_table_1933(v);
}

void	small_parse_table_1933(t_small_parse_table_array *v)
{
	v->a[38660] = 1;
	v->a[38661] = sym_variable_name;
	v->a[38662] = actions(1416);
	v->a[38663] = 2;
	v->a[38664] = aux_sym__simple_variable_name_token1;
	v->a[38665] = aux_sym__multiline_variable_name_token1;
	v->a[38666] = actions(1414);
	v->a[38667] = 8;
	v->a[38668] = anon_sym_BANG;
	v->a[38669] = anon_sym_DASH;
	v->a[38670] = anon_sym_STAR;
	v->a[38671] = anon_sym_QMARK;
	v->a[38672] = anon_sym_DOLLAR;
	v->a[38673] = anon_sym_POUND;
	v->a[38674] = anon_sym_AT;
	v->a[38675] = anon_sym_0;
	v->a[38676] = actions(361);
	v->a[38677] = 16;
	v->a[38678] = anon_sym_esac;
	v->a[38679] = anon_sym_PIPE;
	small_parse_table_1934(v);
}

void	small_parse_table_1934(t_small_parse_table_array *v)
{
	v->a[38680] = anon_sym_SEMI_SEMI;
	v->a[38681] = anon_sym_AMP_AMP;
	v->a[38682] = anon_sym_PIPE_PIPE;
	v->a[38683] = anon_sym_LT;
	v->a[38684] = anon_sym_GT;
	v->a[38685] = anon_sym_GT_GT;
	v->a[38686] = anon_sym_LT_AMP;
	v->a[38687] = anon_sym_GT_AMP;
	v->a[38688] = anon_sym_GT_PIPE;
	v->a[38689] = anon_sym_LT_GT;
	v->a[38690] = anon_sym_LT_LT;
	v->a[38691] = anon_sym_LT_LT_DASH;
	v->a[38692] = aux_sym_heredoc_redirect_token1;
	v->a[38693] = anon_sym_SEMI;
	v->a[38694] = 4;
	v->a[38695] = actions(3);
	v->a[38696] = 1;
	v->a[38697] = sym_comment;
	v->a[38698] = actions(1410);
	v->a[38699] = 2;
	small_parse_table_1935(v);
}

/* EOF small_parse_table_386.c */
