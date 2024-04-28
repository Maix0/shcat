/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1239.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6195(t_small_parse_table_array *v)
{
	v->a[123900] = anon_sym_GT_LPAREN;
	v->a[123901] = 26;
	v->a[123902] = actions(3);
	v->a[123903] = 1;
	v->a[123904] = sym_comment;
	v->a[123905] = actions(6480);
	v->a[123906] = 1;
	v->a[123907] = anon_sym_LPAREN;
	v->a[123908] = actions(6486);
	v->a[123909] = 1;
	v->a[123910] = anon_sym_DOLLAR_LBRACK;
	v->a[123911] = actions(6488);
	v->a[123912] = 1;
	v->a[123913] = anon_sym_DOLLAR;
	v->a[123914] = actions(6490);
	v->a[123915] = 1;
	v->a[123916] = sym__special_character;
	v->a[123917] = actions(6492);
	v->a[123918] = 1;
	v->a[123919] = anon_sym_DQUOTE;
	small_parse_table_6196(v);
}

void	small_parse_table_6196(t_small_parse_table_array *v)
{
	v->a[123920] = actions(6494);
	v->a[123921] = 1;
	v->a[123922] = aux_sym_number_token1;
	v->a[123923] = actions(6496);
	v->a[123924] = 1;
	v->a[123925] = aux_sym_number_token2;
	v->a[123926] = actions(6498);
	v->a[123927] = 1;
	v->a[123928] = anon_sym_DOLLAR_LBRACE;
	v->a[123929] = actions(6500);
	v->a[123930] = 1;
	v->a[123931] = anon_sym_DOLLAR_LPAREN;
	v->a[123932] = actions(6502);
	v->a[123933] = 1;
	v->a[123934] = anon_sym_BQUOTE;
	v->a[123935] = actions(6504);
	v->a[123936] = 1;
	v->a[123937] = anon_sym_DOLLAR_BQUOTE;
	v->a[123938] = actions(6508);
	v->a[123939] = 1;
	small_parse_table_6197(v);
}

void	small_parse_table_6197(t_small_parse_table_array *v)
{
	v->a[123940] = sym_test_operator;
	v->a[123941] = actions(6510);
	v->a[123942] = 1;
	v->a[123943] = sym_extglob_pattern;
	v->a[123944] = actions(6512);
	v->a[123945] = 1;
	v->a[123946] = sym__brace_start;
	v->a[123947] = actions(6551);
	v->a[123948] = 1;
	v->a[123949] = anon_sym_esac;
	v->a[123950] = actions(6553);
	v->a[123951] = 1;
	v->a[123952] = aux_sym_heredoc_redirect_token1;
	v->a[123953] = state(6426);
	v->a[123954] = 1;
	v->a[123955] = aux_sym__literal_repeat1;
	v->a[123956] = state(7007);
	v->a[123957] = 1;
	v->a[123958] = sym_last_case_item;
	v->a[123959] = actions(6476);
	small_parse_table_6198(v);
}

void	small_parse_table_6198(t_small_parse_table_array *v)
{
	v->a[123960] = 2;
	v->a[123961] = anon_sym_LPAREN_LPAREN;
	v->a[123962] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[123963] = actions(6506);
	v->a[123964] = 2;
	v->a[123965] = anon_sym_LT_LPAREN;
	v->a[123966] = anon_sym_GT_LPAREN;
	v->a[123967] = state(3386);
	v->a[123968] = 2;
	v->a[123969] = sym_case_item;
	v->a[123970] = aux_sym_case_statement_repeat1;
	v->a[123971] = state(6695);
	v->a[123972] = 2;
	v->a[123973] = sym_concatenation;
	v->a[123974] = sym__extglob_blob;
	v->a[123975] = actions(6474);
	v->a[123976] = 3;
	v->a[123977] = sym_raw_string;
	v->a[123978] = sym_ansi_c_string;
	v->a[123979] = sym_word;
	small_parse_table_6199(v);
}

void	small_parse_table_6199(t_small_parse_table_array *v)
{
	v->a[123980] = actions(6549);
	v->a[123981] = 3;
	v->a[123982] = anon_sym_SEMI;
	v->a[123983] = anon_sym_AMP;
	v->a[123984] = anon_sym_SEMI_SEMI;
	v->a[123985] = state(6303);
	v->a[123986] = 9;
	v->a[123987] = sym_arithmetic_expansion;
	v->a[123988] = sym_brace_expression;
	v->a[123989] = sym_string;
	v->a[123990] = sym_translated_string;
	v->a[123991] = sym_number;
	v->a[123992] = sym_simple_expansion;
	v->a[123993] = sym_expansion;
	v->a[123994] = sym_command_substitution;
	v->a[123995] = sym_process_substitution;
	v->a[123996] = 6;
	v->a[123997] = actions(3);
	v->a[123998] = 1;
	v->a[123999] = sym_comment;
	small_parse_table_6200(v);
}

/* EOF small_parse_table_1239.c */
