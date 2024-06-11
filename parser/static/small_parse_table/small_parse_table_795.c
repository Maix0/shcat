/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_795.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3975(t_small_parse_table_array *v)
{
	v->a[79500] = anon_sym_LT;
	v->a[79501] = anon_sym_GT;
	v->a[79502] = anon_sym_GT_GT;
	v->a[79503] = anon_sym_AMP_GT;
	v->a[79504] = anon_sym_AMP_GT_GT;
	v->a[79505] = anon_sym_LT_AMP;
	v->a[79506] = anon_sym_GT_AMP;
	v->a[79507] = anon_sym_GT_PIPE;
	v->a[79508] = anon_sym_LT_AMP_DASH;
	v->a[79509] = anon_sym_GT_AMP_DASH;
	v->a[79510] = anon_sym_LT_LT;
	v->a[79511] = anon_sym_LT_LT_DASH;
	v->a[79512] = anon_sym_AMP;
	v->a[79513] = anon_sym_SEMI;
	v->a[79514] = 3;
	v->a[79515] = actions(3);
	v->a[79516] = 1;
	v->a[79517] = sym_comment;
	v->a[79518] = actions(2608);
	v->a[79519] = 2;
	small_parse_table_3976(v);
}

void	small_parse_table_3976(t_small_parse_table_array *v)
{
	v->a[79520] = sym_file_descriptor;
	v->a[79521] = aux_sym_heredoc_redirect_token1;
	v->a[79522] = actions(2610);
	v->a[79523] = 19;
	v->a[79524] = anon_sym_esac;
	v->a[79525] = anon_sym_PIPE;
	v->a[79526] = anon_sym_SEMI_SEMI;
	v->a[79527] = anon_sym_AMP_AMP;
	v->a[79528] = anon_sym_PIPE_PIPE;
	v->a[79529] = anon_sym_LT;
	v->a[79530] = anon_sym_GT;
	v->a[79531] = anon_sym_GT_GT;
	v->a[79532] = anon_sym_AMP_GT;
	v->a[79533] = anon_sym_AMP_GT_GT;
	v->a[79534] = anon_sym_LT_AMP;
	v->a[79535] = anon_sym_GT_AMP;
	v->a[79536] = anon_sym_GT_PIPE;
	v->a[79537] = anon_sym_LT_AMP_DASH;
	v->a[79538] = anon_sym_GT_AMP_DASH;
	v->a[79539] = anon_sym_LT_LT;
	small_parse_table_3977(v);
}

void	small_parse_table_3977(t_small_parse_table_array *v)
{
	v->a[79540] = anon_sym_LT_LT_DASH;
	v->a[79541] = anon_sym_AMP;
	v->a[79542] = anon_sym_SEMI;
	v->a[79543] = 15;
	v->a[79544] = actions(3);
	v->a[79545] = 1;
	v->a[79546] = sym_comment;
	v->a[79547] = actions(1959);
	v->a[79548] = 1;
	v->a[79549] = anon_sym_LPAREN;
	v->a[79550] = actions(1963);
	v->a[79551] = 1;
	v->a[79552] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79553] = actions(1965);
	v->a[79554] = 1;
	v->a[79555] = anon_sym_DOLLAR;
	v->a[79556] = actions(1967);
	v->a[79557] = 1;
	v->a[79558] = anon_sym_DQUOTE;
	v->a[79559] = actions(1969);
	small_parse_table_3978(v);
}

void	small_parse_table_3978(t_small_parse_table_array *v)
{
	v->a[79560] = 1;
	v->a[79561] = anon_sym_DOLLAR_LBRACE;
	v->a[79562] = actions(1971);
	v->a[79563] = 1;
	v->a[79564] = anon_sym_DOLLAR_LPAREN;
	v->a[79565] = actions(1973);
	v->a[79566] = 1;
	v->a[79567] = anon_sym_BQUOTE;
	v->a[79568] = actions(1975);
	v->a[79569] = 1;
	v->a[79570] = sym_extglob_pattern;
	v->a[79571] = state(1547);
	v->a[79572] = 1;
	v->a[79573] = aux_sym_case_statement_repeat1;
	v->a[79574] = state(2080);
	v->a[79575] = 1;
	v->a[79576] = sym_case_item;
	v->a[79577] = state(2378);
	v->a[79578] = 1;
	v->a[79579] = sym__case_item_last;
	small_parse_table_3979(v);
}

void	small_parse_table_3979(t_small_parse_table_array *v)
{
	v->a[79580] = state(2224);
	v->a[79581] = 2;
	v->a[79582] = sym_concatenation;
	v->a[79583] = sym__extglob_blob;
	v->a[79584] = actions(1955);
	v->a[79585] = 3;
	v->a[79586] = sym_raw_string;
	v->a[79587] = sym_number;
	v->a[79588] = sym_word;
	v->a[79589] = state(2157);
	v->a[79590] = 5;
	v->a[79591] = sym_arithmetic_expansion;
	v->a[79592] = sym_string;
	v->a[79593] = sym_simple_expansion;
	v->a[79594] = sym_expansion;
	v->a[79595] = sym_command_substitution;
	v->a[79596] = 3;
	v->a[79597] = actions(3);
	v->a[79598] = 1;
	v->a[79599] = sym_comment;
	small_parse_table_3980(v);
}

/* EOF small_parse_table_795.c */
