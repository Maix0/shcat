/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_742.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3710(t_small_parse_table_array *v)
{
	v->a[74200] = anon_sym_GT;
	v->a[74201] = anon_sym_AMP_GT;
	v->a[74202] = anon_sym_LT_AMP;
	v->a[74203] = anon_sym_GT_AMP;
	v->a[74204] = anon_sym_LT_LT;
	v->a[74205] = actions(1243);
	v->a[74206] = 12;
	v->a[74207] = sym_file_descriptor;
	v->a[74208] = sym__concat;
	v->a[74209] = sym_variable_name;
	v->a[74210] = anon_sym_AMP_AMP;
	v->a[74211] = anon_sym_PIPE_PIPE;
	v->a[74212] = anon_sym_GT_GT;
	v->a[74213] = anon_sym_AMP_GT_GT;
	v->a[74214] = anon_sym_GT_PIPE;
	v->a[74215] = anon_sym_LT_AMP_DASH;
	v->a[74216] = anon_sym_GT_AMP_DASH;
	v->a[74217] = anon_sym_LT_LT_DASH;
	v->a[74218] = aux_sym_concatenation_token1;
	v->a[74219] = 14;
	small_parse_table_3711(v);
}

void	small_parse_table_3711(t_small_parse_table_array *v)
{
	v->a[74220] = actions(3);
	v->a[74221] = 1;
	v->a[74222] = sym_comment;
	v->a[74223] = actions(2851);
	v->a[74224] = 1;
	v->a[74225] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74226] = actions(2853);
	v->a[74227] = 1;
	v->a[74228] = anon_sym_DOLLAR;
	v->a[74229] = actions(2855);
	v->a[74230] = 1;
	v->a[74231] = anon_sym_DQUOTE;
	v->a[74232] = actions(2857);
	v->a[74233] = 1;
	v->a[74234] = aux_sym_number_token1;
	v->a[74235] = actions(2859);
	v->a[74236] = 1;
	v->a[74237] = aux_sym_number_token2;
	v->a[74238] = actions(2861);
	v->a[74239] = 1;
	small_parse_table_3712(v);
}

void	small_parse_table_3712(t_small_parse_table_array *v)
{
	v->a[74240] = anon_sym_DOLLAR_LBRACE;
	v->a[74241] = actions(2863);
	v->a[74242] = 1;
	v->a[74243] = anon_sym_DOLLAR_LPAREN;
	v->a[74244] = actions(2865);
	v->a[74245] = 1;
	v->a[74246] = anon_sym_BQUOTE;
	v->a[74247] = actions(2867);
	v->a[74248] = 1;
	v->a[74249] = sym__comment_word;
	v->a[74250] = actions(2869);
	v->a[74251] = 1;
	v->a[74252] = sym__empty_value;
	v->a[74253] = state(1215);
	v->a[74254] = 1;
	v->a[74255] = sym_concatenation;
	v->a[74256] = actions(2849);
	v->a[74257] = 2;
	v->a[74258] = sym_raw_string;
	v->a[74259] = sym_word;
	small_parse_table_3713(v);
}

void	small_parse_table_3713(t_small_parse_table_array *v)
{
	v->a[74260] = state(1004);
	v->a[74261] = 6;
	v->a[74262] = sym_arithmetic_expansion;
	v->a[74263] = sym_string;
	v->a[74264] = sym_number;
	v->a[74265] = sym_simple_expansion;
	v->a[74266] = sym_expansion;
	v->a[74267] = sym_command_substitution;
	v->a[74268] = 14;
	v->a[74269] = actions(3);
	v->a[74270] = 1;
	v->a[74271] = sym_comment;
	v->a[74272] = actions(2873);
	v->a[74273] = 1;
	v->a[74274] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74275] = actions(2875);
	v->a[74276] = 1;
	v->a[74277] = anon_sym_DOLLAR;
	v->a[74278] = actions(2877);
	v->a[74279] = 1;
	small_parse_table_3714(v);
}

void	small_parse_table_3714(t_small_parse_table_array *v)
{
	v->a[74280] = anon_sym_DQUOTE;
	v->a[74281] = actions(2879);
	v->a[74282] = 1;
	v->a[74283] = aux_sym_number_token1;
	v->a[74284] = actions(2881);
	v->a[74285] = 1;
	v->a[74286] = aux_sym_number_token2;
	v->a[74287] = actions(2883);
	v->a[74288] = 1;
	v->a[74289] = anon_sym_DOLLAR_LBRACE;
	v->a[74290] = actions(2885);
	v->a[74291] = 1;
	v->a[74292] = anon_sym_DOLLAR_LPAREN;
	v->a[74293] = actions(2887);
	v->a[74294] = 1;
	v->a[74295] = anon_sym_BQUOTE;
	v->a[74296] = actions(2889);
	v->a[74297] = 1;
	v->a[74298] = sym__comment_word;
	v->a[74299] = actions(2891);
	small_parse_table_3715(v);
}

/* EOF small_parse_table_742.c */
