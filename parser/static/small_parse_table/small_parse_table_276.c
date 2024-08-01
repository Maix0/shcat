/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_276.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1380(t_small_parse_table_array *v)
{
	v->a[27600] = anon_sym_DOLLAR_LPAREN;
	v->a[27601] = anon_sym_BQUOTE;
	v->a[27602] = sym_word;
	v->a[27603] = anon_sym_SEMI;
	v->a[27604] = 3;
	v->a[27605] = actions(3);
	v->a[27606] = 1;
	v->a[27607] = sym_comment;
	v->a[27608] = actions(1116);
	v->a[27609] = 1;
	v->a[27610] = sym__concat;
	v->a[27611] = actions(1114);
	v->a[27612] = 21;
	v->a[27613] = anon_sym_esac;
	v->a[27614] = anon_sym_PIPE;
	v->a[27615] = anon_sym_SEMI_SEMI;
	v->a[27616] = anon_sym_AMP_AMP;
	v->a[27617] = anon_sym_PIPE_PIPE;
	v->a[27618] = anon_sym_LT;
	v->a[27619] = anon_sym_GT;
	small_parse_table_1381(v);
}

void	small_parse_table_1381(t_small_parse_table_array *v)
{
	v->a[27620] = anon_sym_GT_GT;
	v->a[27621] = anon_sym_LT_LT;
	v->a[27622] = aux_sym_heredoc_redirect_token1;
	v->a[27623] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27624] = aux_sym_concatenation_token1;
	v->a[27625] = anon_sym_DOLLAR;
	v->a[27626] = anon_sym_DQUOTE;
	v->a[27627] = sym_raw_string;
	v->a[27628] = sym_number;
	v->a[27629] = anon_sym_DOLLAR_LBRACE;
	v->a[27630] = anon_sym_DOLLAR_LPAREN;
	v->a[27631] = anon_sym_BQUOTE;
	v->a[27632] = sym_word;
	v->a[27633] = anon_sym_SEMI;
	v->a[27634] = 3;
	v->a[27635] = actions(3);
	v->a[27636] = 1;
	v->a[27637] = sym_comment;
	v->a[27638] = actions(1003);
	v->a[27639] = 1;
	small_parse_table_1382(v);
}

void	small_parse_table_1382(t_small_parse_table_array *v)
{
	v->a[27640] = sym_variable_name;
	v->a[27641] = actions(1001);
	v->a[27642] = 21;
	v->a[27643] = anon_sym_for;
	v->a[27644] = anon_sym_while;
	v->a[27645] = anon_sym_until;
	v->a[27646] = anon_sym_if;
	v->a[27647] = anon_sym_case;
	v->a[27648] = anon_sym_LPAREN;
	v->a[27649] = anon_sym_LBRACE;
	v->a[27650] = anon_sym_RBRACE;
	v->a[27651] = anon_sym_BANG;
	v->a[27652] = anon_sym_LT;
	v->a[27653] = anon_sym_GT;
	v->a[27654] = anon_sym_GT_GT;
	v->a[27655] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27656] = anon_sym_DOLLAR;
	v->a[27657] = anon_sym_DQUOTE;
	v->a[27658] = sym_raw_string;
	v->a[27659] = sym_number;
	small_parse_table_1383(v);
}

void	small_parse_table_1383(t_small_parse_table_array *v)
{
	v->a[27660] = anon_sym_DOLLAR_LBRACE;
	v->a[27661] = anon_sym_DOLLAR_LPAREN;
	v->a[27662] = anon_sym_BQUOTE;
	v->a[27663] = sym_word;
	v->a[27664] = 6;
	v->a[27665] = actions(3);
	v->a[27666] = 1;
	v->a[27667] = sym_comment;
	v->a[27668] = actions(1176);
	v->a[27669] = 1;
	v->a[27670] = sym_variable_name;
	v->a[27671] = state(1300);
	v->a[27672] = 2;
	v->a[27673] = sym_variable_assignment;
	v->a[27674] = aux_sym__variable_assignments_repeat1;
	v->a[27675] = state(1319);
	v->a[27676] = 3;
	v->a[27677] = sym_file_redirect;
	v->a[27678] = sym_heredoc_redirect;
	v->a[27679] = aux_sym_redirected_statement_repeat1;
	small_parse_table_1384(v);
}

void	small_parse_table_1384(t_small_parse_table_array *v)
{
	v->a[27680] = actions(580);
	v->a[27681] = 7;
	v->a[27682] = anon_sym_PIPE;
	v->a[27683] = anon_sym_AMP_AMP;
	v->a[27684] = anon_sym_PIPE_PIPE;
	v->a[27685] = anon_sym_LT;
	v->a[27686] = anon_sym_GT;
	v->a[27687] = anon_sym_GT_GT;
	v->a[27688] = anon_sym_LT_LT;
	v->a[27689] = actions(576);
	v->a[27690] = 9;
	v->a[27691] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27692] = anon_sym_DOLLAR;
	v->a[27693] = anon_sym_DQUOTE;
	v->a[27694] = sym_raw_string;
	v->a[27695] = sym_number;
	v->a[27696] = anon_sym_DOLLAR_LBRACE;
	v->a[27697] = anon_sym_DOLLAR_LPAREN;
	v->a[27698] = anon_sym_BQUOTE;
	v->a[27699] = sym_word;
	small_parse_table_1385(v);
}

/* EOF small_parse_table_276.c */
