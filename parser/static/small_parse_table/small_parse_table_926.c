/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_926.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4630(t_small_parse_table_array *v)
{
	v->a[92600] = sym_word;
	v->a[92601] = actions(3252);
	v->a[92602] = 15;
	v->a[92603] = sym_file_descriptor;
	v->a[92604] = sym_variable_name;
	v->a[92605] = sym_test_operator;
	v->a[92606] = sym__brace_start;
	v->a[92607] = anon_sym_GT_GT;
	v->a[92608] = anon_sym_AMP_GT_GT;
	v->a[92609] = anon_sym_GT_PIPE;
	v->a[92610] = anon_sym_LT_AMP_DASH;
	v->a[92611] = anon_sym_GT_AMP_DASH;
	v->a[92612] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[92613] = anon_sym_DQUOTE;
	v->a[92614] = sym_raw_string;
	v->a[92615] = anon_sym_DOLLAR_LBRACE;
	v->a[92616] = anon_sym_BQUOTE;
	v->a[92617] = anon_sym_DOLLAR_BQUOTE;
	v->a[92618] = 8;
	v->a[92619] = actions(3);
	small_parse_table_4631(v);
}

void	small_parse_table_4631(t_small_parse_table_array *v)
{
	v->a[92620] = 1;
	v->a[92621] = sym_comment;
	v->a[92622] = actions(5157);
	v->a[92623] = 1;
	v->a[92624] = aux_sym_heredoc_redirect_token1;
	v->a[92625] = actions(5159);
	v->a[92626] = 1;
	v->a[92627] = sym_file_descriptor;
	v->a[92628] = actions(2520);
	v->a[92629] = 2;
	v->a[92630] = anon_sym_LT_LT;
	v->a[92631] = anon_sym_LT_LT_DASH;
	v->a[92632] = actions(5155);
	v->a[92633] = 2;
	v->a[92634] = anon_sym_LT_AMP_DASH;
	v->a[92635] = anon_sym_GT_AMP_DASH;
	v->a[92636] = state(1900);
	v->a[92637] = 3;
	v->a[92638] = sym_file_redirect;
	v->a[92639] = sym_heredoc_redirect;
	small_parse_table_4632(v);
}

void	small_parse_table_4632(t_small_parse_table_array *v)
{
	v->a[92640] = aux_sym_redirected_statement_repeat1;
	v->a[92641] = actions(5153);
	v->a[92642] = 8;
	v->a[92643] = anon_sym_LT;
	v->a[92644] = anon_sym_GT;
	v->a[92645] = anon_sym_GT_GT;
	v->a[92646] = anon_sym_AMP_GT;
	v->a[92647] = anon_sym_AMP_GT_GT;
	v->a[92648] = anon_sym_LT_AMP;
	v->a[92649] = anon_sym_GT_AMP;
	v->a[92650] = anon_sym_GT_PIPE;
	v->a[92651] = actions(5151);
	v->a[92652] = 10;
	v->a[92653] = anon_sym_esac;
	v->a[92654] = anon_sym_PIPE;
	v->a[92655] = anon_sym_SEMI_SEMI;
	v->a[92656] = anon_sym_SEMI_AMP;
	v->a[92657] = anon_sym_SEMI_SEMI_AMP;
	v->a[92658] = anon_sym_PIPE_AMP;
	v->a[92659] = anon_sym_AMP_AMP;
	small_parse_table_4633(v);
}

void	small_parse_table_4633(t_small_parse_table_array *v)
{
	v->a[92660] = anon_sym_PIPE_PIPE;
	v->a[92661] = anon_sym_AMP;
	v->a[92662] = anon_sym_SEMI;
	v->a[92663] = 3;
	v->a[92664] = actions(3);
	v->a[92665] = 1;
	v->a[92666] = sym_comment;
	v->a[92667] = actions(2774);
	v->a[92668] = 5;
	v->a[92669] = sym_file_descriptor;
	v->a[92670] = sym__concat;
	v->a[92671] = sym_variable_name;
	v->a[92672] = ts_builtin_sym_end;
	v->a[92673] = aux_sym_heredoc_redirect_token1;
	v->a[92674] = actions(2772);
	v->a[92675] = 22;
	v->a[92676] = anon_sym_PIPE;
	v->a[92677] = anon_sym_RPAREN;
	v->a[92678] = anon_sym_SEMI_SEMI;
	v->a[92679] = anon_sym_PIPE_AMP;
	small_parse_table_4634(v);
}

void	small_parse_table_4634(t_small_parse_table_array *v)
{
	v->a[92680] = anon_sym_AMP_AMP;
	v->a[92681] = anon_sym_PIPE_PIPE;
	v->a[92682] = anon_sym_LT;
	v->a[92683] = anon_sym_GT;
	v->a[92684] = anon_sym_GT_GT;
	v->a[92685] = anon_sym_AMP_GT;
	v->a[92686] = anon_sym_AMP_GT_GT;
	v->a[92687] = anon_sym_LT_AMP;
	v->a[92688] = anon_sym_GT_AMP;
	v->a[92689] = anon_sym_GT_PIPE;
	v->a[92690] = anon_sym_LT_AMP_DASH;
	v->a[92691] = anon_sym_GT_AMP_DASH;
	v->a[92692] = anon_sym_LT_LT;
	v->a[92693] = anon_sym_LT_LT_DASH;
	v->a[92694] = anon_sym_AMP;
	v->a[92695] = aux_sym_concatenation_token1;
	v->a[92696] = anon_sym_BQUOTE;
	v->a[92697] = anon_sym_SEMI;
	v->a[92698] = 6;
	v->a[92699] = actions(3);
	small_parse_table_4635(v);
}

/* EOF small_parse_table_926.c */
