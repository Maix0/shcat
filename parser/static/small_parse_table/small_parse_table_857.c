/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_857.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4285(t_small_parse_table_array *v)
{
	v->a[85700] = anon_sym_AMP;
	v->a[85701] = anon_sym_LT;
	v->a[85702] = anon_sym_GT;
	v->a[85703] = anon_sym_LT_LT;
	v->a[85704] = anon_sym_GT_GT;
	v->a[85705] = anon_sym_SEMI_SEMI;
	v->a[85706] = anon_sym_SEMI_AMP;
	v->a[85707] = anon_sym_SEMI_SEMI_AMP;
	v->a[85708] = anon_sym_PIPE_AMP;
	v->a[85709] = anon_sym_AMP_GT;
	v->a[85710] = anon_sym_AMP_GT_GT;
	v->a[85711] = anon_sym_LT_AMP;
	v->a[85712] = anon_sym_GT_AMP;
	v->a[85713] = anon_sym_GT_PIPE;
	v->a[85714] = anon_sym_LT_AMP_DASH;
	v->a[85715] = anon_sym_GT_AMP_DASH;
	v->a[85716] = anon_sym_LT_LT_DASH;
	v->a[85717] = anon_sym_LT_LT_LT;
	v->a[85718] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85719] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_4286(v);
}

void	small_parse_table_4286(t_small_parse_table_array *v)
{
	v->a[85720] = anon_sym_DOLLAR;
	v->a[85721] = anon_sym_DQUOTE;
	v->a[85722] = sym_raw_string;
	v->a[85723] = sym_ansi_c_string;
	v->a[85724] = aux_sym_number_token1;
	v->a[85725] = aux_sym_number_token2;
	v->a[85726] = anon_sym_DOLLAR_LBRACE;
	v->a[85727] = anon_sym_DOLLAR_LPAREN;
	v->a[85728] = anon_sym_BQUOTE;
	v->a[85729] = anon_sym_DOLLAR_BQUOTE;
	v->a[85730] = anon_sym_LT_LPAREN;
	v->a[85731] = anon_sym_GT_LPAREN;
	v->a[85732] = sym_word;
	v->a[85733] = 3;
	v->a[85734] = actions(3);
	v->a[85735] = 1;
	v->a[85736] = sym_comment;
	v->a[85737] = actions(1318);
	v->a[85738] = 5;
	v->a[85739] = sym_file_descriptor;
	small_parse_table_4287(v);
}

void	small_parse_table_4287(t_small_parse_table_array *v)
{
	v->a[85740] = sym__concat;
	v->a[85741] = sym_test_operator;
	v->a[85742] = sym__brace_start;
	v->a[85743] = aux_sym_heredoc_redirect_token1;
	v->a[85744] = actions(1316);
	v->a[85745] = 39;
	v->a[85746] = anon_sym_LPAREN_LPAREN;
	v->a[85747] = anon_sym_SEMI;
	v->a[85748] = anon_sym_PIPE_PIPE;
	v->a[85749] = anon_sym_AMP_AMP;
	v->a[85750] = anon_sym_PIPE;
	v->a[85751] = anon_sym_AMP;
	v->a[85752] = anon_sym_LT;
	v->a[85753] = anon_sym_GT;
	v->a[85754] = anon_sym_LT_LT;
	v->a[85755] = anon_sym_GT_GT;
	v->a[85756] = anon_sym_RPAREN;
	v->a[85757] = anon_sym_SEMI_SEMI;
	v->a[85758] = anon_sym_PIPE_AMP;
	v->a[85759] = anon_sym_AMP_GT;
	small_parse_table_4288(v);
}

void	small_parse_table_4288(t_small_parse_table_array *v)
{
	v->a[85760] = anon_sym_AMP_GT_GT;
	v->a[85761] = anon_sym_LT_AMP;
	v->a[85762] = anon_sym_GT_AMP;
	v->a[85763] = anon_sym_GT_PIPE;
	v->a[85764] = anon_sym_LT_AMP_DASH;
	v->a[85765] = anon_sym_GT_AMP_DASH;
	v->a[85766] = anon_sym_LT_LT_DASH;
	v->a[85767] = anon_sym_LT_LT_LT;
	v->a[85768] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85769] = anon_sym_DOLLAR_LBRACK;
	v->a[85770] = aux_sym_concatenation_token1;
	v->a[85771] = anon_sym_DOLLAR;
	v->a[85772] = sym__special_character;
	v->a[85773] = anon_sym_DQUOTE;
	v->a[85774] = sym_raw_string;
	v->a[85775] = sym_ansi_c_string;
	v->a[85776] = aux_sym_number_token1;
	v->a[85777] = aux_sym_number_token2;
	v->a[85778] = anon_sym_DOLLAR_LBRACE;
	v->a[85779] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4289(v);
}

void	small_parse_table_4289(t_small_parse_table_array *v)
{
	v->a[85780] = anon_sym_BQUOTE;
	v->a[85781] = anon_sym_DOLLAR_BQUOTE;
	v->a[85782] = anon_sym_LT_LPAREN;
	v->a[85783] = anon_sym_GT_LPAREN;
	v->a[85784] = sym_word;
	v->a[85785] = 27;
	v->a[85786] = actions(71);
	v->a[85787] = 1;
	v->a[85788] = sym_comment;
	v->a[85789] = actions(225);
	v->a[85790] = 1;
	v->a[85791] = anon_sym_RPAREN_RPAREN;
	v->a[85792] = actions(1131);
	v->a[85793] = 1;
	v->a[85794] = anon_sym_LPAREN;
	v->a[85795] = actions(1141);
	v->a[85796] = 1;
	v->a[85797] = anon_sym_DOLLAR_LBRACK;
	v->a[85798] = actions(1145);
	v->a[85799] = 1;
	small_parse_table_4290(v);
}

/* EOF small_parse_table_857.c */
