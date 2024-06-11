/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_639.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3195(t_small_parse_table_array *v)
{
	v->a[63900] = anon_sym_GT_PIPE;
	v->a[63901] = anon_sym_LT_AMP_DASH;
	v->a[63902] = anon_sym_GT_AMP_DASH;
	v->a[63903] = aux_sym_heredoc_redirect_token1;
	v->a[63904] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63905] = anon_sym_DOLLAR;
	v->a[63906] = anon_sym_DQUOTE;
	v->a[63907] = sym_raw_string;
	v->a[63908] = sym_number;
	v->a[63909] = anon_sym_DOLLAR_LBRACE;
	v->a[63910] = anon_sym_DOLLAR_LPAREN;
	v->a[63911] = anon_sym_BQUOTE;
	v->a[63912] = sym_word;
	v->a[63913] = 17;
	v->a[63914] = actions(3);
	v->a[63915] = 1;
	v->a[63916] = sym_comment;
	v->a[63917] = actions(1959);
	v->a[63918] = 1;
	v->a[63919] = anon_sym_LPAREN;
	small_parse_table_3196(v);
}

void	small_parse_table_3196(t_small_parse_table_array *v)
{
	v->a[63920] = actions(1963);
	v->a[63921] = 1;
	v->a[63922] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63923] = actions(1965);
	v->a[63924] = 1;
	v->a[63925] = anon_sym_DOLLAR;
	v->a[63926] = actions(1967);
	v->a[63927] = 1;
	v->a[63928] = anon_sym_DQUOTE;
	v->a[63929] = actions(1969);
	v->a[63930] = 1;
	v->a[63931] = anon_sym_DOLLAR_LBRACE;
	v->a[63932] = actions(1971);
	v->a[63933] = 1;
	v->a[63934] = anon_sym_DOLLAR_LPAREN;
	v->a[63935] = actions(1973);
	v->a[63936] = 1;
	v->a[63937] = anon_sym_BQUOTE;
	v->a[63938] = actions(1975);
	v->a[63939] = 1;
	small_parse_table_3197(v);
}

void	small_parse_table_3197(t_small_parse_table_array *v)
{
	v->a[63940] = sym_extglob_pattern;
	v->a[63941] = actions(1983);
	v->a[63942] = 1;
	v->a[63943] = anon_sym_esac;
	v->a[63944] = state(1486);
	v->a[63945] = 1;
	v->a[63946] = aux_sym_case_statement_repeat1;
	v->a[63947] = state(2080);
	v->a[63948] = 1;
	v->a[63949] = sym_case_item;
	v->a[63950] = state(2312);
	v->a[63951] = 1;
	v->a[63952] = sym__case_item_last;
	v->a[63953] = state(2224);
	v->a[63954] = 2;
	v->a[63955] = sym_concatenation;
	v->a[63956] = sym__extglob_blob;
	v->a[63957] = actions(1955);
	v->a[63958] = 3;
	v->a[63959] = sym_raw_string;
	small_parse_table_3198(v);
}

void	small_parse_table_3198(t_small_parse_table_array *v)
{
	v->a[63960] = sym_number;
	v->a[63961] = sym_word;
	v->a[63962] = actions(1985);
	v->a[63963] = 4;
	v->a[63964] = anon_sym_SEMI_SEMI;
	v->a[63965] = aux_sym_heredoc_redirect_token1;
	v->a[63966] = anon_sym_AMP;
	v->a[63967] = anon_sym_SEMI;
	v->a[63968] = state(2157);
	v->a[63969] = 5;
	v->a[63970] = sym_arithmetic_expansion;
	v->a[63971] = sym_string;
	v->a[63972] = sym_simple_expansion;
	v->a[63973] = sym_expansion;
	v->a[63974] = sym_command_substitution;
	v->a[63975] = 6;
	v->a[63976] = actions(3);
	v->a[63977] = 1;
	v->a[63978] = sym_comment;
	v->a[63979] = actions(972);
	small_parse_table_3199(v);
}

void	small_parse_table_3199(t_small_parse_table_array *v)
{
	v->a[63980] = 1;
	v->a[63981] = sym_file_descriptor;
	v->a[63982] = actions(1951);
	v->a[63983] = 1;
	v->a[63984] = aux_sym_concatenation_token1;
	v->a[63985] = actions(1987);
	v->a[63986] = 1;
	v->a[63987] = sym__concat;
	v->a[63988] = state(1099);
	v->a[63989] = 1;
	v->a[63990] = aux_sym_concatenation_repeat1;
	v->a[63991] = actions(974);
	v->a[63992] = 22;
	v->a[63993] = anon_sym_AMP_AMP;
	v->a[63994] = anon_sym_PIPE_PIPE;
	v->a[63995] = anon_sym_LT;
	v->a[63996] = anon_sym_GT;
	v->a[63997] = anon_sym_GT_GT;
	v->a[63998] = anon_sym_AMP_GT;
	v->a[63999] = anon_sym_AMP_GT_GT;
	small_parse_table_3200(v);
}

/* EOF small_parse_table_639.c */
