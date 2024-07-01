/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_436.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2180(t_small_parse_table_array *v)
{
	v->a[43600] = sym_command_substitution;
	v->a[43601] = actions(711);
	v->a[43602] = 22;
	v->a[43603] = anon_sym_PIPE;
	v->a[43604] = anon_sym_AMP_AMP;
	v->a[43605] = anon_sym_PIPE_PIPE;
	v->a[43606] = anon_sym_LT;
	v->a[43607] = anon_sym_GT;
	v->a[43608] = anon_sym_GT_GT;
	v->a[43609] = anon_sym_LT_AMP;
	v->a[43610] = anon_sym_GT_AMP;
	v->a[43611] = anon_sym_GT_PIPE;
	v->a[43612] = anon_sym_LT_AMP_DASH;
	v->a[43613] = anon_sym_GT_AMP_DASH;
	v->a[43614] = anon_sym_LT_LT;
	v->a[43615] = anon_sym_LT_LT_DASH;
	v->a[43616] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43617] = anon_sym_DOLLAR;
	v->a[43618] = anon_sym_DQUOTE;
	v->a[43619] = sym_raw_string;
	small_parse_table_2181(v);
}

void	small_parse_table_2181(t_small_parse_table_array *v)
{
	v->a[43620] = sym_number;
	v->a[43621] = anon_sym_DOLLAR_LBRACE;
	v->a[43622] = anon_sym_DOLLAR_LPAREN;
	v->a[43623] = anon_sym_BQUOTE;
	v->a[43624] = sym_word;
	v->a[43625] = 3;
	v->a[43626] = actions(3);
	v->a[43627] = 1;
	v->a[43628] = sym_comment;
	v->a[43629] = actions(1015);
	v->a[43630] = 3;
	v->a[43631] = sym_file_descriptor;
	v->a[43632] = sym__concat;
	v->a[43633] = ts_builtin_sym_end;
	v->a[43634] = actions(1013);
	v->a[43635] = 27;
	v->a[43636] = anon_sym_PIPE;
	v->a[43637] = anon_sym_SEMI_SEMI;
	v->a[43638] = anon_sym_AMP_AMP;
	v->a[43639] = anon_sym_PIPE_PIPE;
	small_parse_table_2182(v);
}

void	small_parse_table_2182(t_small_parse_table_array *v)
{
	v->a[43640] = anon_sym_LT;
	v->a[43641] = anon_sym_GT;
	v->a[43642] = anon_sym_GT_GT;
	v->a[43643] = anon_sym_LT_AMP;
	v->a[43644] = anon_sym_GT_AMP;
	v->a[43645] = anon_sym_GT_PIPE;
	v->a[43646] = anon_sym_LT_AMP_DASH;
	v->a[43647] = anon_sym_GT_AMP_DASH;
	v->a[43648] = anon_sym_LT_LT;
	v->a[43649] = anon_sym_LT_LT_DASH;
	v->a[43650] = aux_sym_heredoc_redirect_token1;
	v->a[43651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43652] = anon_sym_AMP;
	v->a[43653] = aux_sym_concatenation_token1;
	v->a[43654] = anon_sym_DOLLAR;
	v->a[43655] = anon_sym_DQUOTE;
	v->a[43656] = sym_raw_string;
	v->a[43657] = sym_number;
	v->a[43658] = anon_sym_DOLLAR_LBRACE;
	v->a[43659] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2183(v);
}

void	small_parse_table_2183(t_small_parse_table_array *v)
{
	v->a[43660] = anon_sym_BQUOTE;
	v->a[43661] = sym_word;
	v->a[43662] = anon_sym_SEMI;
	v->a[43663] = 3;
	v->a[43664] = actions(3);
	v->a[43665] = 1;
	v->a[43666] = sym_comment;
	v->a[43667] = actions(1518);
	v->a[43668] = 2;
	v->a[43669] = sym_file_descriptor;
	v->a[43670] = sym_variable_name;
	v->a[43671] = actions(1516);
	v->a[43672] = 28;
	v->a[43673] = anon_sym_for;
	v->a[43674] = anon_sym_while;
	v->a[43675] = anon_sym_until;
	v->a[43676] = anon_sym_if;
	v->a[43677] = anon_sym_fi;
	v->a[43678] = anon_sym_elif;
	v->a[43679] = anon_sym_else;
	small_parse_table_2184(v);
}

void	small_parse_table_2184(t_small_parse_table_array *v)
{
	v->a[43680] = anon_sym_case;
	v->a[43681] = anon_sym_LPAREN;
	v->a[43682] = anon_sym_LBRACE;
	v->a[43683] = anon_sym_BANG;
	v->a[43684] = anon_sym_LT;
	v->a[43685] = anon_sym_GT;
	v->a[43686] = anon_sym_GT_GT;
	v->a[43687] = anon_sym_LT_AMP;
	v->a[43688] = anon_sym_GT_AMP;
	v->a[43689] = anon_sym_GT_PIPE;
	v->a[43690] = anon_sym_LT_AMP_DASH;
	v->a[43691] = anon_sym_GT_AMP_DASH;
	v->a[43692] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43693] = anon_sym_DOLLAR;
	v->a[43694] = anon_sym_DQUOTE;
	v->a[43695] = sym_raw_string;
	v->a[43696] = sym_number;
	v->a[43697] = anon_sym_DOLLAR_LBRACE;
	v->a[43698] = anon_sym_DOLLAR_LPAREN;
	v->a[43699] = anon_sym_BQUOTE;
	small_parse_table_2185(v);
}

/* EOF small_parse_table_436.c */
