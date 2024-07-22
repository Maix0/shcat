/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_707.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3535(t_small_parse_table_array *v)
{
	v->a[70700] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70701] = anon_sym_DOLLAR;
	v->a[70702] = anon_sym_DQUOTE;
	v->a[70703] = sym_raw_string;
	v->a[70704] = sym_number;
	v->a[70705] = anon_sym_DOLLAR_LBRACE;
	v->a[70706] = anon_sym_DOLLAR_LPAREN;
	v->a[70707] = anon_sym_BQUOTE;
	v->a[70708] = sym_word;
	v->a[70709] = anon_sym_SEMI;
	v->a[70710] = 8;
	v->a[70711] = actions(501);
	v->a[70712] = 1;
	v->a[70713] = sym_comment;
	v->a[70714] = actions(884);
	v->a[70715] = 1;
	v->a[70716] = anon_sym_LT_LT;
	v->a[70717] = actions(1878);
	v->a[70718] = 1;
	v->a[70719] = sym_file_descriptor;
	small_parse_table_3536(v);
}

void	small_parse_table_3536(t_small_parse_table_array *v)
{
	v->a[70720] = actions(2811);
	v->a[70721] = 1;
	v->a[70722] = anon_sym_LT_LT_DASH;
	v->a[70723] = actions(1874);
	v->a[70724] = 2;
	v->a[70725] = anon_sym_LT;
	v->a[70726] = anon_sym_GT;
	v->a[70727] = actions(2807);
	v->a[70728] = 2;
	v->a[70729] = anon_sym_AMP_AMP;
	v->a[70730] = anon_sym_PIPE_PIPE;
	v->a[70731] = state(1099);
	v->a[70732] = 3;
	v->a[70733] = sym_file_redirect;
	v->a[70734] = sym_heredoc_redirect;
	v->a[70735] = aux_sym_redirected_statement_repeat1;
	v->a[70736] = actions(2809);
	v->a[70737] = 5;
	v->a[70738] = anon_sym_GT_GT;
	v->a[70739] = anon_sym_LT_AMP;
	small_parse_table_3537(v);
}

void	small_parse_table_3537(t_small_parse_table_array *v)
{
	v->a[70740] = anon_sym_GT_AMP;
	v->a[70741] = anon_sym_GT_PIPE;
	v->a[70742] = anon_sym_LT_GT;
	v->a[70743] = 5;
	v->a[70744] = actions(3);
	v->a[70745] = 1;
	v->a[70746] = sym_comment;
	v->a[70747] = actions(2803);
	v->a[70748] = 1;
	v->a[70749] = aux_sym_concatenation_token1;
	v->a[70750] = actions(2813);
	v->a[70751] = 1;
	v->a[70752] = sym__concat;
	v->a[70753] = state(1429);
	v->a[70754] = 1;
	v->a[70755] = aux_sym_concatenation_repeat1;
	v->a[70756] = actions(1099);
	v->a[70757] = 12;
	v->a[70758] = anon_sym_SEMI_SEMI;
	v->a[70759] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3538(v);
}

void	small_parse_table_3538(t_small_parse_table_array *v)
{
	v->a[70760] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70761] = anon_sym_DOLLAR;
	v->a[70762] = anon_sym_DQUOTE;
	v->a[70763] = sym_raw_string;
	v->a[70764] = sym_number;
	v->a[70765] = anon_sym_DOLLAR_LBRACE;
	v->a[70766] = anon_sym_DOLLAR_LPAREN;
	v->a[70767] = anon_sym_BQUOTE;
	v->a[70768] = sym_word;
	v->a[70769] = anon_sym_SEMI;
	v->a[70770] = 7;
	v->a[70771] = actions(3);
	v->a[70772] = 1;
	v->a[70773] = sym_comment;
	v->a[70774] = actions(1819);
	v->a[70775] = 1;
	v->a[70776] = anon_sym_PERCENT;
	v->a[70777] = actions(2815);
	v->a[70778] = 1;
	v->a[70779] = anon_sym_RBRACE;
	small_parse_table_3539(v);
}

void	small_parse_table_3539(t_small_parse_table_array *v)
{
	v->a[70780] = state(1961);
	v->a[70781] = 1;
	v->a[70782] = sym__expansion_expression;
	v->a[70783] = state(1964);
	v->a[70784] = 1;
	v->a[70785] = sym__expansion_regex;
	v->a[70786] = actions(1825);
	v->a[70787] = 3;
	v->a[70788] = sym__immediate_double_hash;
	v->a[70789] = anon_sym_POUND;
	v->a[70790] = anon_sym_PERCENT_PERCENT;
	v->a[70791] = actions(1823);
	v->a[70792] = 8;
	v->a[70793] = anon_sym_COLON_DASH;
	v->a[70794] = anon_sym_DASH3;
	v->a[70795] = anon_sym_COLON_EQ;
	v->a[70796] = anon_sym_EQ2;
	v->a[70797] = anon_sym_COLON_QMARK;
	v->a[70798] = anon_sym_QMARK2;
	v->a[70799] = anon_sym_COLON_PLUS;
	small_parse_table_3540(v);
}

/* EOF small_parse_table_707.c */
