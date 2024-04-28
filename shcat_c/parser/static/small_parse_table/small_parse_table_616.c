/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_616.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3080(t_small_parse_table_array *v)
{
	v->a[61600] = 3;
	v->a[61601] = actions(3);
	v->a[61602] = 1;
	v->a[61603] = sym_comment;
	v->a[61604] = actions(1310);
	v->a[61605] = 5;
	v->a[61606] = sym_file_descriptor;
	v->a[61607] = sym__concat;
	v->a[61608] = sym_test_operator;
	v->a[61609] = sym__brace_start;
	v->a[61610] = aux_sym_heredoc_redirect_token1;
	v->a[61611] = actions(1308);
	v->a[61612] = 41;
	v->a[61613] = anon_sym_LPAREN_LPAREN;
	v->a[61614] = anon_sym_SEMI;
	v->a[61615] = anon_sym_PIPE_PIPE;
	v->a[61616] = anon_sym_AMP_AMP;
	v->a[61617] = anon_sym_PIPE;
	v->a[61618] = anon_sym_AMP;
	v->a[61619] = anon_sym_LT;
	small_parse_table_3081(v);
}

void	small_parse_table_3081(t_small_parse_table_array *v)
{
	v->a[61620] = anon_sym_GT;
	v->a[61621] = anon_sym_LT_LT;
	v->a[61622] = anon_sym_GT_GT;
	v->a[61623] = anon_sym_esac;
	v->a[61624] = anon_sym_SEMI_SEMI;
	v->a[61625] = anon_sym_SEMI_AMP;
	v->a[61626] = anon_sym_SEMI_SEMI_AMP;
	v->a[61627] = anon_sym_PIPE_AMP;
	v->a[61628] = anon_sym_AMP_GT;
	v->a[61629] = anon_sym_AMP_GT_GT;
	v->a[61630] = anon_sym_LT_AMP;
	v->a[61631] = anon_sym_GT_AMP;
	v->a[61632] = anon_sym_GT_PIPE;
	v->a[61633] = anon_sym_LT_AMP_DASH;
	v->a[61634] = anon_sym_GT_AMP_DASH;
	v->a[61635] = anon_sym_LT_LT_DASH;
	v->a[61636] = anon_sym_LT_LT_LT;
	v->a[61637] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61638] = anon_sym_DOLLAR_LBRACK;
	v->a[61639] = aux_sym_concatenation_token1;
	small_parse_table_3082(v);
}

void	small_parse_table_3082(t_small_parse_table_array *v)
{
	v->a[61640] = anon_sym_DOLLAR;
	v->a[61641] = sym__special_character;
	v->a[61642] = anon_sym_DQUOTE;
	v->a[61643] = sym_raw_string;
	v->a[61644] = sym_ansi_c_string;
	v->a[61645] = aux_sym_number_token1;
	v->a[61646] = aux_sym_number_token2;
	v->a[61647] = anon_sym_DOLLAR_LBRACE;
	v->a[61648] = anon_sym_DOLLAR_LPAREN;
	v->a[61649] = anon_sym_BQUOTE;
	v->a[61650] = anon_sym_DOLLAR_BQUOTE;
	v->a[61651] = anon_sym_LT_LPAREN;
	v->a[61652] = anon_sym_GT_LPAREN;
	v->a[61653] = sym_word;
	v->a[61654] = 3;
	v->a[61655] = actions(3);
	v->a[61656] = 1;
	v->a[61657] = sym_comment;
	v->a[61658] = actions(1306);
	v->a[61659] = 5;
	small_parse_table_3083(v);
}

void	small_parse_table_3083(t_small_parse_table_array *v)
{
	v->a[61660] = sym_file_descriptor;
	v->a[61661] = sym__concat;
	v->a[61662] = sym_test_operator;
	v->a[61663] = sym__brace_start;
	v->a[61664] = aux_sym_heredoc_redirect_token1;
	v->a[61665] = actions(1304);
	v->a[61666] = 41;
	v->a[61667] = anon_sym_LPAREN_LPAREN;
	v->a[61668] = anon_sym_SEMI;
	v->a[61669] = anon_sym_PIPE_PIPE;
	v->a[61670] = anon_sym_AMP_AMP;
	v->a[61671] = anon_sym_PIPE;
	v->a[61672] = anon_sym_AMP;
	v->a[61673] = anon_sym_LT;
	v->a[61674] = anon_sym_GT;
	v->a[61675] = anon_sym_LT_LT;
	v->a[61676] = anon_sym_GT_GT;
	v->a[61677] = anon_sym_esac;
	v->a[61678] = anon_sym_SEMI_SEMI;
	v->a[61679] = anon_sym_SEMI_AMP;
	small_parse_table_3084(v);
}

void	small_parse_table_3084(t_small_parse_table_array *v)
{
	v->a[61680] = anon_sym_SEMI_SEMI_AMP;
	v->a[61681] = anon_sym_PIPE_AMP;
	v->a[61682] = anon_sym_AMP_GT;
	v->a[61683] = anon_sym_AMP_GT_GT;
	v->a[61684] = anon_sym_LT_AMP;
	v->a[61685] = anon_sym_GT_AMP;
	v->a[61686] = anon_sym_GT_PIPE;
	v->a[61687] = anon_sym_LT_AMP_DASH;
	v->a[61688] = anon_sym_GT_AMP_DASH;
	v->a[61689] = anon_sym_LT_LT_DASH;
	v->a[61690] = anon_sym_LT_LT_LT;
	v->a[61691] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61692] = anon_sym_DOLLAR_LBRACK;
	v->a[61693] = aux_sym_concatenation_token1;
	v->a[61694] = anon_sym_DOLLAR;
	v->a[61695] = sym__special_character;
	v->a[61696] = anon_sym_DQUOTE;
	v->a[61697] = sym_raw_string;
	v->a[61698] = sym_ansi_c_string;
	v->a[61699] = aux_sym_number_token1;
	small_parse_table_3085(v);
}

/* EOF small_parse_table_616.c */
