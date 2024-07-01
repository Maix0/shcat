/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_594.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2970(t_small_parse_table_array *v)
{
	v->a[59400] = anon_sym_BQUOTE;
	v->a[59401] = state(1913);
	v->a[59402] = 1;
	v->a[59403] = sym_terminator;
	v->a[59404] = state(1177);
	v->a[59405] = 2;
	v->a[59406] = sym_concatenation;
	v->a[59407] = aux_sym_for_statement_repeat1;
	v->a[59408] = actions(1891);
	v->a[59409] = 3;
	v->a[59410] = sym_raw_string;
	v->a[59411] = sym_number;
	v->a[59412] = sym_word;
	v->a[59413] = actions(1893);
	v->a[59414] = 4;
	v->a[59415] = anon_sym_SEMI_SEMI;
	v->a[59416] = aux_sym_heredoc_redirect_token1;
	v->a[59417] = anon_sym_AMP;
	v->a[59418] = anon_sym_SEMI;
	v->a[59419] = state(1398);
	small_parse_table_2971(v);
}

void	small_parse_table_2971(t_small_parse_table_array *v)
{
	v->a[59420] = 5;
	v->a[59421] = sym_arithmetic_expansion;
	v->a[59422] = sym_string;
	v->a[59423] = sym_simple_expansion;
	v->a[59424] = sym_expansion;
	v->a[59425] = sym_command_substitution;
	v->a[59426] = 5;
	v->a[59427] = actions(3);
	v->a[59428] = 1;
	v->a[59429] = sym_comment;
	v->a[59430] = actions(1962);
	v->a[59431] = 1;
	v->a[59432] = sym_variable_name;
	v->a[59433] = actions(1914);
	v->a[59434] = 2;
	v->a[59435] = sym_file_descriptor;
	v->a[59436] = aux_sym_heredoc_redirect_token1;
	v->a[59437] = state(1068);
	v->a[59438] = 2;
	v->a[59439] = sym_variable_assignment;
	small_parse_table_2972(v);
}

void	small_parse_table_2972(t_small_parse_table_array *v)
{
	v->a[59440] = aux_sym__variable_assignments_repeat1;
	v->a[59441] = actions(1916);
	v->a[59442] = 16;
	v->a[59443] = anon_sym_esac;
	v->a[59444] = anon_sym_PIPE;
	v->a[59445] = anon_sym_SEMI_SEMI;
	v->a[59446] = anon_sym_AMP_AMP;
	v->a[59447] = anon_sym_PIPE_PIPE;
	v->a[59448] = anon_sym_LT;
	v->a[59449] = anon_sym_GT;
	v->a[59450] = anon_sym_GT_GT;
	v->a[59451] = anon_sym_LT_AMP;
	v->a[59452] = anon_sym_GT_AMP;
	v->a[59453] = anon_sym_GT_PIPE;
	v->a[59454] = anon_sym_LT_GT;
	v->a[59455] = anon_sym_LT_LT;
	v->a[59456] = anon_sym_LT_LT_DASH;
	v->a[59457] = anon_sym_AMP;
	v->a[59458] = anon_sym_SEMI;
	v->a[59459] = 7;
	small_parse_table_2973(v);
}

void	small_parse_table_2973(t_small_parse_table_array *v)
{
	v->a[59460] = actions(3);
	v->a[59461] = 1;
	v->a[59462] = sym_comment;
	v->a[59463] = actions(1923);
	v->a[59464] = 1;
	v->a[59465] = aux_sym_heredoc_redirect_token1;
	v->a[59466] = actions(1971);
	v->a[59467] = 1;
	v->a[59468] = sym_file_descriptor;
	v->a[59469] = actions(1968);
	v->a[59470] = 2;
	v->a[59471] = anon_sym_LT_LT;
	v->a[59472] = anon_sym_LT_LT_DASH;
	v->a[59473] = state(1069);
	v->a[59474] = 3;
	v->a[59475] = sym_file_redirect;
	v->a[59476] = sym_heredoc_redirect;
	v->a[59477] = aux_sym_redirected_statement_repeat1;
	v->a[59478] = actions(1925);
	v->a[59479] = 7;
	small_parse_table_2974(v);
}

void	small_parse_table_2974(t_small_parse_table_array *v)
{
	v->a[59480] = anon_sym_esac;
	v->a[59481] = anon_sym_PIPE;
	v->a[59482] = anon_sym_SEMI_SEMI;
	v->a[59483] = anon_sym_AMP_AMP;
	v->a[59484] = anon_sym_PIPE_PIPE;
	v->a[59485] = anon_sym_AMP;
	v->a[59486] = anon_sym_SEMI;
	v->a[59487] = actions(1965);
	v->a[59488] = 7;
	v->a[59489] = anon_sym_LT;
	v->a[59490] = anon_sym_GT;
	v->a[59491] = anon_sym_GT_GT;
	v->a[59492] = anon_sym_LT_AMP;
	v->a[59493] = anon_sym_GT_AMP;
	v->a[59494] = anon_sym_GT_PIPE;
	v->a[59495] = anon_sym_LT_GT;
	v->a[59496] = 4;
	v->a[59497] = actions(3);
	v->a[59498] = 1;
	v->a[59499] = sym_comment;
	small_parse_table_2975(v);
}

/* EOF small_parse_table_594.c */
