/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2557.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12785(t_small_parse_table_array *v)
{
	v->a[255700] = anon_sym_DASH;
	v->a[255701] = anon_sym_STAR;
	v->a[255702] = anon_sym_QMARK;
	v->a[255703] = anon_sym_AT2;
	v->a[255704] = actions(11756);
	v->a[255705] = 5;
	v->a[255706] = anon_sym_BANG;
	v->a[255707] = anon_sym_DOLLAR;
	v->a[255708] = anon_sym_POUND;
	v->a[255709] = anon_sym_0;
	v->a[255710] = anon_sym__;
	v->a[255711] = 6;
	v->a[255712] = actions(3);
	v->a[255713] = 1;
	v->a[255714] = sym_comment;
	v->a[255715] = actions(11651);
	v->a[255716] = 1;
	v->a[255717] = aux_sym_concatenation_token1;
	v->a[255718] = actions(11778);
	v->a[255719] = 1;
	small_parse_table_12786(v);
}

void	small_parse_table_12786(t_small_parse_table_array *v)
{
	v->a[255720] = sym__concat;
	v->a[255721] = state(4268);
	v->a[255722] = 1;
	v->a[255723] = aux_sym_concatenation_repeat1;
	v->a[255724] = actions(1267);
	v->a[255725] = 3;
	v->a[255726] = sym_file_descriptor;
	v->a[255727] = ts_builtin_sym_end;
	v->a[255728] = aux_sym_heredoc_redirect_token1;
	v->a[255729] = actions(1265);
	v->a[255730] = 19;
	v->a[255731] = anon_sym_SEMI;
	v->a[255732] = anon_sym_PIPE_PIPE;
	v->a[255733] = anon_sym_AMP_AMP;
	v->a[255734] = anon_sym_PIPE;
	v->a[255735] = anon_sym_AMP;
	v->a[255736] = anon_sym_LT;
	v->a[255737] = anon_sym_GT;
	v->a[255738] = anon_sym_LT_LT;
	v->a[255739] = anon_sym_GT_GT;
	small_parse_table_12787(v);
}

void	small_parse_table_12787(t_small_parse_table_array *v)
{
	v->a[255740] = anon_sym_SEMI_SEMI;
	v->a[255741] = anon_sym_PIPE_AMP;
	v->a[255742] = anon_sym_AMP_GT;
	v->a[255743] = anon_sym_AMP_GT_GT;
	v->a[255744] = anon_sym_LT_AMP;
	v->a[255745] = anon_sym_GT_AMP;
	v->a[255746] = anon_sym_GT_PIPE;
	v->a[255747] = anon_sym_LT_AMP_DASH;
	v->a[255748] = anon_sym_GT_AMP_DASH;
	v->a[255749] = anon_sym_LT_LT_DASH;
	v->a[255750] = 3;
	v->a[255751] = actions(3);
	v->a[255752] = 1;
	v->a[255753] = sym_comment;
	v->a[255754] = actions(1306);
	v->a[255755] = 4;
	v->a[255756] = sym__concat;
	v->a[255757] = sym_test_operator;
	v->a[255758] = sym__brace_start;
	v->a[255759] = aux_sym_heredoc_redirect_token1;
	small_parse_table_12788(v);
}

void	small_parse_table_12788(t_small_parse_table_array *v)
{
	v->a[255760] = actions(1304);
	v->a[255761] = 21;
	v->a[255762] = anon_sym_LPAREN_LPAREN;
	v->a[255763] = anon_sym_SEMI;
	v->a[255764] = anon_sym_AMP;
	v->a[255765] = anon_sym_SEMI_SEMI;
	v->a[255766] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[255767] = anon_sym_DOLLAR_LBRACK;
	v->a[255768] = aux_sym_concatenation_token1;
	v->a[255769] = anon_sym_DOLLAR;
	v->a[255770] = sym__special_character;
	v->a[255771] = anon_sym_DQUOTE;
	v->a[255772] = sym_raw_string;
	v->a[255773] = sym_ansi_c_string;
	v->a[255774] = aux_sym_number_token1;
	v->a[255775] = aux_sym_number_token2;
	v->a[255776] = anon_sym_DOLLAR_LBRACE;
	v->a[255777] = anon_sym_DOLLAR_LPAREN;
	v->a[255778] = anon_sym_BQUOTE;
	v->a[255779] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_12789(v);
}

void	small_parse_table_12789(t_small_parse_table_array *v)
{
	v->a[255780] = anon_sym_LT_LPAREN;
	v->a[255781] = anon_sym_GT_LPAREN;
	v->a[255782] = sym_word;
	v->a[255783] = 3;
	v->a[255784] = actions(3);
	v->a[255785] = 1;
	v->a[255786] = sym_comment;
	v->a[255787] = actions(11782);
	v->a[255788] = 2;
	v->a[255789] = sym_file_descriptor;
	v->a[255790] = aux_sym_heredoc_redirect_token1;
	v->a[255791] = actions(11780);
	v->a[255792] = 23;
	v->a[255793] = anon_sym_SEMI;
	v->a[255794] = anon_sym_PIPE_PIPE;
	v->a[255795] = anon_sym_AMP_AMP;
	v->a[255796] = anon_sym_PIPE;
	v->a[255797] = anon_sym_AMP;
	v->a[255798] = anon_sym_LT;
	v->a[255799] = anon_sym_GT;
	small_parse_table_12790(v);
}

/* EOF small_parse_table_2557.c */
