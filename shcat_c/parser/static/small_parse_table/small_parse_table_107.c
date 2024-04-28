/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_107.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_535(t_small_parse_table_array *v)
{
	v->a[10700] = 9;
	v->a[10701] = sym_arithmetic_expansion;
	v->a[10702] = sym_brace_expression;
	v->a[10703] = sym_string;
	v->a[10704] = sym_translated_string;
	v->a[10705] = sym_number;
	v->a[10706] = sym_simple_expansion;
	v->a[10707] = sym_expansion;
	v->a[10708] = sym_command_substitution;
	v->a[10709] = sym_process_substitution;
	v->a[10710] = 8;
	v->a[10711] = actions(3);
	v->a[10712] = 1;
	v->a[10713] = sym_comment;
	v->a[10714] = actions(2307);
	v->a[10715] = 1;
	v->a[10716] = anon_sym_DQUOTE;
	v->a[10717] = actions(2947);
	v->a[10718] = 1;
	v->a[10719] = sym_variable_name;
	small_parse_table_536(v);
}

void	small_parse_table_536(t_small_parse_table_array *v)
{
	v->a[10720] = state(1432);
	v->a[10721] = 1;
	v->a[10722] = sym_string;
	v->a[10723] = actions(2945);
	v->a[10724] = 2;
	v->a[10725] = aux_sym__simple_variable_name_token1;
	v->a[10726] = aux_sym__multiline_variable_name_token1;
	v->a[10727] = actions(1235);
	v->a[10728] = 3;
	v->a[10729] = sym_file_descriptor;
	v->a[10730] = sym_test_operator;
	v->a[10731] = sym__brace_start;
	v->a[10732] = actions(2943);
	v->a[10733] = 9;
	v->a[10734] = anon_sym_DASH;
	v->a[10735] = anon_sym_STAR;
	v->a[10736] = anon_sym_BANG;
	v->a[10737] = anon_sym_QMARK;
	v->a[10738] = anon_sym_DOLLAR;
	v->a[10739] = anon_sym_POUND;
	small_parse_table_537(v);
}

void	small_parse_table_537(t_small_parse_table_array *v)
{
	v->a[10740] = anon_sym_AT2;
	v->a[10741] = anon_sym_0;
	v->a[10742] = anon_sym__;
	v->a[10743] = actions(1227);
	v->a[10744] = 38;
	v->a[10745] = anon_sym_LPAREN_LPAREN;
	v->a[10746] = anon_sym_SEMI;
	v->a[10747] = anon_sym_PIPE_PIPE;
	v->a[10748] = anon_sym_AMP_AMP;
	v->a[10749] = anon_sym_PIPE;
	v->a[10750] = anon_sym_AMP;
	v->a[10751] = anon_sym_LT;
	v->a[10752] = anon_sym_GT;
	v->a[10753] = anon_sym_LT_LT;
	v->a[10754] = anon_sym_GT_GT;
	v->a[10755] = anon_sym_esac;
	v->a[10756] = anon_sym_SEMI_SEMI;
	v->a[10757] = anon_sym_SEMI_AMP;
	v->a[10758] = anon_sym_SEMI_SEMI_AMP;
	v->a[10759] = anon_sym_PIPE_AMP;
	small_parse_table_538(v);
}

void	small_parse_table_538(t_small_parse_table_array *v)
{
	v->a[10760] = anon_sym_AMP_GT;
	v->a[10761] = anon_sym_AMP_GT_GT;
	v->a[10762] = anon_sym_LT_AMP;
	v->a[10763] = anon_sym_GT_AMP;
	v->a[10764] = anon_sym_GT_PIPE;
	v->a[10765] = anon_sym_LT_AMP_DASH;
	v->a[10766] = anon_sym_GT_AMP_DASH;
	v->a[10767] = anon_sym_LT_LT_DASH;
	v->a[10768] = aux_sym_heredoc_redirect_token1;
	v->a[10769] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10770] = anon_sym_DOLLAR_LBRACK;
	v->a[10771] = sym__special_character;
	v->a[10772] = sym_raw_string;
	v->a[10773] = sym_ansi_c_string;
	v->a[10774] = aux_sym_number_token1;
	v->a[10775] = aux_sym_number_token2;
	v->a[10776] = anon_sym_DOLLAR_LBRACE;
	v->a[10777] = anon_sym_DOLLAR_LPAREN;
	v->a[10778] = anon_sym_BQUOTE;
	v->a[10779] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_539(v);
}

void	small_parse_table_539(t_small_parse_table_array *v)
{
	v->a[10780] = anon_sym_LT_LPAREN;
	v->a[10781] = anon_sym_GT_LPAREN;
	v->a[10782] = sym_word;
	v->a[10783] = 8;
	v->a[10784] = actions(3);
	v->a[10785] = 1;
	v->a[10786] = sym_comment;
	v->a[10787] = actions(2307);
	v->a[10788] = 1;
	v->a[10789] = anon_sym_DQUOTE;
	v->a[10790] = actions(2947);
	v->a[10791] = 1;
	v->a[10792] = sym_variable_name;
	v->a[10793] = state(1432);
	v->a[10794] = 1;
	v->a[10795] = sym_string;
	v->a[10796] = actions(2945);
	v->a[10797] = 2;
	v->a[10798] = aux_sym__simple_variable_name_token1;
	v->a[10799] = aux_sym__multiline_variable_name_token1;
	small_parse_table_540(v);
}

/* EOF small_parse_table_107.c */
