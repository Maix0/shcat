/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_997.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4985(t_small_parse_table_array *v)
{
	v->a[99700] = sym_arithmetic_expansion;
	v->a[99701] = sym_brace_expression;
	v->a[99702] = sym_string;
	v->a[99703] = sym_translated_string;
	v->a[99704] = sym_number;
	v->a[99705] = sym_simple_expansion;
	v->a[99706] = sym_expansion;
	v->a[99707] = sym_command_substitution;
	v->a[99708] = sym_process_substitution;
	v->a[99709] = 3;
	v->a[99710] = actions(3);
	v->a[99711] = 1;
	v->a[99712] = sym_comment;
	v->a[99713] = actions(1253);
	v->a[99714] = 6;
	v->a[99715] = sym_file_descriptor;
	v->a[99716] = sym__concat;
	v->a[99717] = sym_test_operator;
	v->a[99718] = sym__brace_start;
	v->a[99719] = ts_builtin_sym_end;
	small_parse_table_4986(v);
}

void	small_parse_table_4986(t_small_parse_table_array *v)
{
	v->a[99720] = aux_sym_heredoc_redirect_token1;
	v->a[99721] = actions(1251);
	v->a[99722] = 37;
	v->a[99723] = anon_sym_LPAREN_LPAREN;
	v->a[99724] = anon_sym_SEMI;
	v->a[99725] = anon_sym_PIPE_PIPE;
	v->a[99726] = anon_sym_AMP_AMP;
	v->a[99727] = anon_sym_PIPE;
	v->a[99728] = anon_sym_AMP;
	v->a[99729] = anon_sym_LT;
	v->a[99730] = anon_sym_GT;
	v->a[99731] = anon_sym_LT_LT;
	v->a[99732] = anon_sym_GT_GT;
	v->a[99733] = anon_sym_SEMI_SEMI;
	v->a[99734] = anon_sym_PIPE_AMP;
	v->a[99735] = anon_sym_AMP_GT;
	v->a[99736] = anon_sym_AMP_GT_GT;
	v->a[99737] = anon_sym_LT_AMP;
	v->a[99738] = anon_sym_GT_AMP;
	v->a[99739] = anon_sym_GT_PIPE;
	small_parse_table_4987(v);
}

void	small_parse_table_4987(t_small_parse_table_array *v)
{
	v->a[99740] = anon_sym_LT_AMP_DASH;
	v->a[99741] = anon_sym_GT_AMP_DASH;
	v->a[99742] = anon_sym_LT_LT_DASH;
	v->a[99743] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99744] = anon_sym_DOLLAR_LBRACK;
	v->a[99745] = aux_sym_concatenation_token1;
	v->a[99746] = anon_sym_DOLLAR;
	v->a[99747] = sym__special_character;
	v->a[99748] = anon_sym_DQUOTE;
	v->a[99749] = sym_raw_string;
	v->a[99750] = sym_ansi_c_string;
	v->a[99751] = aux_sym_number_token1;
	v->a[99752] = aux_sym_number_token2;
	v->a[99753] = anon_sym_DOLLAR_LBRACE;
	v->a[99754] = anon_sym_DOLLAR_LPAREN;
	v->a[99755] = anon_sym_BQUOTE;
	v->a[99756] = anon_sym_DOLLAR_BQUOTE;
	v->a[99757] = anon_sym_LT_LPAREN;
	v->a[99758] = anon_sym_GT_LPAREN;
	v->a[99759] = sym_word;
	small_parse_table_4988(v);
}

void	small_parse_table_4988(t_small_parse_table_array *v)
{
	v->a[99760] = 3;
	v->a[99761] = actions(3);
	v->a[99762] = 1;
	v->a[99763] = sym_comment;
	v->a[99764] = actions(1326);
	v->a[99765] = 6;
	v->a[99766] = sym_file_descriptor;
	v->a[99767] = sym__concat;
	v->a[99768] = sym_test_operator;
	v->a[99769] = sym__brace_start;
	v->a[99770] = ts_builtin_sym_end;
	v->a[99771] = aux_sym_heredoc_redirect_token1;
	v->a[99772] = actions(1324);
	v->a[99773] = 37;
	v->a[99774] = anon_sym_LPAREN_LPAREN;
	v->a[99775] = anon_sym_SEMI;
	v->a[99776] = anon_sym_PIPE_PIPE;
	v->a[99777] = anon_sym_AMP_AMP;
	v->a[99778] = anon_sym_PIPE;
	v->a[99779] = anon_sym_AMP;
	small_parse_table_4989(v);
}

void	small_parse_table_4989(t_small_parse_table_array *v)
{
	v->a[99780] = anon_sym_LT;
	v->a[99781] = anon_sym_GT;
	v->a[99782] = anon_sym_LT_LT;
	v->a[99783] = anon_sym_GT_GT;
	v->a[99784] = anon_sym_SEMI_SEMI;
	v->a[99785] = anon_sym_PIPE_AMP;
	v->a[99786] = anon_sym_AMP_GT;
	v->a[99787] = anon_sym_AMP_GT_GT;
	v->a[99788] = anon_sym_LT_AMP;
	v->a[99789] = anon_sym_GT_AMP;
	v->a[99790] = anon_sym_GT_PIPE;
	v->a[99791] = anon_sym_LT_AMP_DASH;
	v->a[99792] = anon_sym_GT_AMP_DASH;
	v->a[99793] = anon_sym_LT_LT_DASH;
	v->a[99794] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99795] = anon_sym_DOLLAR_LBRACK;
	v->a[99796] = aux_sym_concatenation_token1;
	v->a[99797] = anon_sym_DOLLAR;
	v->a[99798] = sym__special_character;
	v->a[99799] = anon_sym_DQUOTE;
	small_parse_table_4990(v);
}

/* EOF small_parse_table_997.c */
