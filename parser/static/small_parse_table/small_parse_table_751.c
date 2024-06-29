/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_751.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3755(t_small_parse_table_array *v)
{
	v->a[75100] = anon_sym_DOLLAR_LBRACE;
	v->a[75101] = actions(1891);
	v->a[75102] = 1;
	v->a[75103] = anon_sym_DOLLAR_LPAREN;
	v->a[75104] = actions(1893);
	v->a[75105] = 1;
	v->a[75106] = anon_sym_BQUOTE;
	v->a[75107] = actions(1895);
	v->a[75108] = 1;
	v->a[75109] = sym_extglob_pattern;
	v->a[75110] = state(1396);
	v->a[75111] = 1;
	v->a[75112] = aux_sym_case_statement_repeat1;
	v->a[75113] = state(1923);
	v->a[75114] = 1;
	v->a[75115] = sym_case_item;
	v->a[75116] = state(2135);
	v->a[75117] = 1;
	v->a[75118] = sym__case_item_last;
	v->a[75119] = state(2078);
	small_parse_table_3756(v);
}

void	small_parse_table_3756(t_small_parse_table_array *v)
{
	v->a[75120] = 2;
	v->a[75121] = sym_concatenation;
	v->a[75122] = sym__extglob_blob;
	v->a[75123] = actions(1875);
	v->a[75124] = 3;
	v->a[75125] = sym_raw_string;
	v->a[75126] = sym_number;
	v->a[75127] = sym_word;
	v->a[75128] = state(2004);
	v->a[75129] = 5;
	v->a[75130] = sym_arithmetic_expansion;
	v->a[75131] = sym_string;
	v->a[75132] = sym_simple_expansion;
	v->a[75133] = sym_expansion;
	v->a[75134] = sym_command_substitution;
	v->a[75135] = 15;
	v->a[75136] = actions(3);
	v->a[75137] = 1;
	v->a[75138] = sym_comment;
	v->a[75139] = actions(1879);
	small_parse_table_3757(v);
}

void	small_parse_table_3757(t_small_parse_table_array *v)
{
	v->a[75140] = 1;
	v->a[75141] = anon_sym_LPAREN;
	v->a[75142] = actions(1883);
	v->a[75143] = 1;
	v->a[75144] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75145] = actions(1885);
	v->a[75146] = 1;
	v->a[75147] = anon_sym_DOLLAR;
	v->a[75148] = actions(1887);
	v->a[75149] = 1;
	v->a[75150] = anon_sym_DQUOTE;
	v->a[75151] = actions(1889);
	v->a[75152] = 1;
	v->a[75153] = anon_sym_DOLLAR_LBRACE;
	v->a[75154] = actions(1891);
	v->a[75155] = 1;
	v->a[75156] = anon_sym_DOLLAR_LPAREN;
	v->a[75157] = actions(1893);
	v->a[75158] = 1;
	v->a[75159] = anon_sym_BQUOTE;
	small_parse_table_3758(v);
}

void	small_parse_table_3758(t_small_parse_table_array *v)
{
	v->a[75160] = actions(1895);
	v->a[75161] = 1;
	v->a[75162] = sym_extglob_pattern;
	v->a[75163] = state(1396);
	v->a[75164] = 1;
	v->a[75165] = aux_sym_case_statement_repeat1;
	v->a[75166] = state(1923);
	v->a[75167] = 1;
	v->a[75168] = sym_case_item;
	v->a[75169] = state(2171);
	v->a[75170] = 1;
	v->a[75171] = sym__case_item_last;
	v->a[75172] = state(2078);
	v->a[75173] = 2;
	v->a[75174] = sym_concatenation;
	v->a[75175] = sym__extglob_blob;
	v->a[75176] = actions(1875);
	v->a[75177] = 3;
	v->a[75178] = sym_raw_string;
	v->a[75179] = sym_number;
	small_parse_table_3759(v);
}

void	small_parse_table_3759(t_small_parse_table_array *v)
{
	v->a[75180] = sym_word;
	v->a[75181] = state(2004);
	v->a[75182] = 5;
	v->a[75183] = sym_arithmetic_expansion;
	v->a[75184] = sym_string;
	v->a[75185] = sym_simple_expansion;
	v->a[75186] = sym_expansion;
	v->a[75187] = sym_command_substitution;
	v->a[75188] = 3;
	v->a[75189] = actions(3);
	v->a[75190] = 1;
	v->a[75191] = sym_comment;
	v->a[75192] = actions(2358);
	v->a[75193] = 2;
	v->a[75194] = sym_file_descriptor;
	v->a[75195] = aux_sym_heredoc_redirect_token1;
	v->a[75196] = actions(2360);
	v->a[75197] = 19;
	v->a[75198] = anon_sym_esac;
	v->a[75199] = anon_sym_PIPE;
	small_parse_table_3760(v);
}

/* EOF small_parse_table_751.c */
