/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_352.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1760(t_small_parse_table_array *v)
{
	v->a[35200] = anon_sym_DQUOTE;
	v->a[35201] = sym_raw_string;
	v->a[35202] = aux_sym_number_token1;
	v->a[35203] = aux_sym_number_token2;
	v->a[35204] = anon_sym_DOLLAR_LBRACE;
	v->a[35205] = anon_sym_DOLLAR_LPAREN;
	v->a[35206] = anon_sym_BQUOTE;
	v->a[35207] = anon_sym_DOLLAR_BQUOTE;
	v->a[35208] = aux_sym__simple_variable_name_token1;
	v->a[35209] = sym_word;
	v->a[35210] = anon_sym_SEMI;
	v->a[35211] = 6;
	v->a[35212] = actions(3);
	v->a[35213] = 1;
	v->a[35214] = sym_comment;
	v->a[35215] = actions(3423);
	v->a[35216] = 1;
	v->a[35217] = aux_sym_concatenation_token1;
	v->a[35218] = actions(3471);
	v->a[35219] = 1;
	small_parse_table_1761(v);
}

void	small_parse_table_1761(t_small_parse_table_array *v)
{
	v->a[35220] = sym__concat;
	v->a[35221] = state(827);
	v->a[35222] = 1;
	v->a[35223] = aux_sym_concatenation_repeat1;
	v->a[35224] = actions(2696);
	v->a[35225] = 5;
	v->a[35226] = sym_file_descriptor;
	v->a[35227] = sym_variable_name;
	v->a[35228] = sym_test_operator;
	v->a[35229] = sym__brace_start;
	v->a[35230] = aux_sym_heredoc_redirect_token1;
	v->a[35231] = actions(2694);
	v->a[35232] = 32;
	v->a[35233] = anon_sym_PIPE;
	v->a[35234] = anon_sym_RPAREN;
	v->a[35235] = anon_sym_SEMI_SEMI;
	v->a[35236] = anon_sym_PIPE_AMP;
	v->a[35237] = anon_sym_AMP_AMP;
	v->a[35238] = anon_sym_PIPE_PIPE;
	v->a[35239] = anon_sym_LT;
	small_parse_table_1762(v);
}

void	small_parse_table_1762(t_small_parse_table_array *v)
{
	v->a[35240] = anon_sym_GT;
	v->a[35241] = anon_sym_GT_GT;
	v->a[35242] = anon_sym_AMP_GT;
	v->a[35243] = anon_sym_AMP_GT_GT;
	v->a[35244] = anon_sym_LT_AMP;
	v->a[35245] = anon_sym_GT_AMP;
	v->a[35246] = anon_sym_GT_PIPE;
	v->a[35247] = anon_sym_LT_AMP_DASH;
	v->a[35248] = anon_sym_GT_AMP_DASH;
	v->a[35249] = anon_sym_LT_LT;
	v->a[35250] = anon_sym_LT_LT_DASH;
	v->a[35251] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35252] = anon_sym_AMP;
	v->a[35253] = anon_sym_DOLLAR;
	v->a[35254] = sym__special_character;
	v->a[35255] = anon_sym_DQUOTE;
	v->a[35256] = sym_raw_string;
	v->a[35257] = aux_sym_number_token1;
	v->a[35258] = aux_sym_number_token2;
	v->a[35259] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1763(v);
}

void	small_parse_table_1763(t_small_parse_table_array *v)
{
	v->a[35260] = anon_sym_DOLLAR_LPAREN;
	v->a[35261] = anon_sym_BQUOTE;
	v->a[35262] = anon_sym_DOLLAR_BQUOTE;
	v->a[35263] = sym_word;
	v->a[35264] = anon_sym_SEMI;
	v->a[35265] = 3;
	v->a[35266] = actions(3);
	v->a[35267] = 1;
	v->a[35268] = sym_comment;
	v->a[35269] = actions(2967);
	v->a[35270] = 5;
	v->a[35271] = sym_file_descriptor;
	v->a[35272] = sym__concat;
	v->a[35273] = sym_test_operator;
	v->a[35274] = sym__brace_start;
	v->a[35275] = aux_sym_heredoc_redirect_token1;
	v->a[35276] = actions(2965);
	v->a[35277] = 35;
	v->a[35278] = anon_sym_esac;
	v->a[35279] = anon_sym_PIPE;
	small_parse_table_1764(v);
}

void	small_parse_table_1764(t_small_parse_table_array *v)
{
	v->a[35280] = anon_sym_SEMI_SEMI;
	v->a[35281] = anon_sym_SEMI_AMP;
	v->a[35282] = anon_sym_SEMI_SEMI_AMP;
	v->a[35283] = anon_sym_PIPE_AMP;
	v->a[35284] = anon_sym_AMP_AMP;
	v->a[35285] = anon_sym_PIPE_PIPE;
	v->a[35286] = anon_sym_LT;
	v->a[35287] = anon_sym_GT;
	v->a[35288] = anon_sym_GT_GT;
	v->a[35289] = anon_sym_AMP_GT;
	v->a[35290] = anon_sym_AMP_GT_GT;
	v->a[35291] = anon_sym_LT_AMP;
	v->a[35292] = anon_sym_GT_AMP;
	v->a[35293] = anon_sym_GT_PIPE;
	v->a[35294] = anon_sym_LT_AMP_DASH;
	v->a[35295] = anon_sym_GT_AMP_DASH;
	v->a[35296] = anon_sym_LT_LT;
	v->a[35297] = anon_sym_LT_LT_DASH;
	v->a[35298] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35299] = anon_sym_AMP;
	small_parse_table_1765(v);
}

/* EOF small_parse_table_352.c */
