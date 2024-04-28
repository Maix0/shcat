/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_437.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2185(t_small_parse_table_array *v)
{
	v->a[43700] = 40;
	v->a[43701] = anon_sym_LPAREN_LPAREN;
	v->a[43702] = anon_sym_SEMI;
	v->a[43703] = anon_sym_PIPE_PIPE;
	v->a[43704] = anon_sym_AMP_AMP;
	v->a[43705] = anon_sym_PIPE;
	v->a[43706] = anon_sym_AMP;
	v->a[43707] = anon_sym_EQ_EQ;
	v->a[43708] = anon_sym_LT;
	v->a[43709] = anon_sym_GT;
	v->a[43710] = anon_sym_LT_LT;
	v->a[43711] = anon_sym_GT_GT;
	v->a[43712] = anon_sym_RPAREN;
	v->a[43713] = anon_sym_SEMI_SEMI;
	v->a[43714] = anon_sym_PIPE_AMP;
	v->a[43715] = anon_sym_EQ_TILDE;
	v->a[43716] = anon_sym_AMP_GT;
	v->a[43717] = anon_sym_AMP_GT_GT;
	v->a[43718] = anon_sym_LT_AMP;
	v->a[43719] = anon_sym_GT_AMP;
	small_parse_table_2186(v);
}

void	small_parse_table_2186(t_small_parse_table_array *v)
{
	v->a[43720] = anon_sym_GT_PIPE;
	v->a[43721] = anon_sym_LT_AMP_DASH;
	v->a[43722] = anon_sym_GT_AMP_DASH;
	v->a[43723] = anon_sym_LT_LT_DASH;
	v->a[43724] = anon_sym_LT_LT_LT;
	v->a[43725] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43726] = anon_sym_DOLLAR_LBRACK;
	v->a[43727] = anon_sym_DOLLAR;
	v->a[43728] = sym__special_character;
	v->a[43729] = anon_sym_DQUOTE;
	v->a[43730] = sym_raw_string;
	v->a[43731] = sym_ansi_c_string;
	v->a[43732] = aux_sym_number_token1;
	v->a[43733] = aux_sym_number_token2;
	v->a[43734] = anon_sym_DOLLAR_LBRACE;
	v->a[43735] = anon_sym_DOLLAR_LPAREN;
	v->a[43736] = anon_sym_BQUOTE;
	v->a[43737] = anon_sym_DOLLAR_BQUOTE;
	v->a[43738] = anon_sym_LT_LPAREN;
	v->a[43739] = anon_sym_GT_LPAREN;
	small_parse_table_2187(v);
}

void	small_parse_table_2187(t_small_parse_table_array *v)
{
	v->a[43740] = sym_word;
	v->a[43741] = 6;
	v->a[43742] = actions(3);
	v->a[43743] = 1;
	v->a[43744] = sym_comment;
	v->a[43745] = actions(5144);
	v->a[43746] = 1;
	v->a[43747] = aux_sym_concatenation_token1;
	v->a[43748] = actions(5146);
	v->a[43749] = 1;
	v->a[43750] = sym__concat;
	v->a[43751] = state(1123);
	v->a[43752] = 1;
	v->a[43753] = aux_sym_concatenation_repeat1;
	v->a[43754] = actions(4469);
	v->a[43755] = 6;
	v->a[43756] = sym_file_descriptor;
	v->a[43757] = sym_test_operator;
	v->a[43758] = sym__bare_dollar;
	v->a[43759] = sym__brace_start;
	small_parse_table_2188(v);
}

void	small_parse_table_2188(t_small_parse_table_array *v)
{
	v->a[43760] = ts_builtin_sym_end;
	v->a[43761] = aux_sym_heredoc_redirect_token1;
	v->a[43762] = actions(4467);
	v->a[43763] = 39;
	v->a[43764] = anon_sym_LPAREN_LPAREN;
	v->a[43765] = anon_sym_SEMI;
	v->a[43766] = anon_sym_PIPE_PIPE;
	v->a[43767] = anon_sym_AMP_AMP;
	v->a[43768] = anon_sym_PIPE;
	v->a[43769] = anon_sym_AMP;
	v->a[43770] = anon_sym_EQ_EQ;
	v->a[43771] = anon_sym_LT;
	v->a[43772] = anon_sym_GT;
	v->a[43773] = anon_sym_LT_LT;
	v->a[43774] = anon_sym_GT_GT;
	v->a[43775] = anon_sym_SEMI_SEMI;
	v->a[43776] = anon_sym_PIPE_AMP;
	v->a[43777] = anon_sym_EQ_TILDE;
	v->a[43778] = anon_sym_AMP_GT;
	v->a[43779] = anon_sym_AMP_GT_GT;
	small_parse_table_2189(v);
}

void	small_parse_table_2189(t_small_parse_table_array *v)
{
	v->a[43780] = anon_sym_LT_AMP;
	v->a[43781] = anon_sym_GT_AMP;
	v->a[43782] = anon_sym_GT_PIPE;
	v->a[43783] = anon_sym_LT_AMP_DASH;
	v->a[43784] = anon_sym_GT_AMP_DASH;
	v->a[43785] = anon_sym_LT_LT_DASH;
	v->a[43786] = anon_sym_LT_LT_LT;
	v->a[43787] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43788] = anon_sym_DOLLAR_LBRACK;
	v->a[43789] = anon_sym_DOLLAR;
	v->a[43790] = sym__special_character;
	v->a[43791] = anon_sym_DQUOTE;
	v->a[43792] = sym_raw_string;
	v->a[43793] = sym_ansi_c_string;
	v->a[43794] = aux_sym_number_token1;
	v->a[43795] = aux_sym_number_token2;
	v->a[43796] = anon_sym_DOLLAR_LBRACE;
	v->a[43797] = anon_sym_DOLLAR_LPAREN;
	v->a[43798] = anon_sym_BQUOTE;
	v->a[43799] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_2190(v);
}

/* EOF small_parse_table_437.c */
